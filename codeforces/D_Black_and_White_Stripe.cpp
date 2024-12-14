#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int wcnt = 0;
    vector<int> pos(n);

    if (n == 1) {
        cout << (s[0] == 'W' ? 1 : 0) << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            wcnt++;
        }
        pos[i] = wcnt;
    }

    int ans = INT_MAX;
    for (int i = 0; i <= n - k; i++) {
        int j = i + k - 1;
        int window_wcnt = (i > 0) ? pos[j] - pos[i - 1] : pos[j];  
        ans = min(ans, window_wcnt);
    }

    cout << ans << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
