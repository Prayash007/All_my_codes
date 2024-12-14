#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n - 1; i++) {
        if (s[i] < s[i + 1] - 1) {
            // Perform decrement and swap
            int temp = s[i];
            s[i] = s[i + 1] - 1;
            s[i + 1] = temp;

            if (i > 0) i -= 2;
        }
    }
    cout << s << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while (test-- > 0) {
        solve();
    }
}
