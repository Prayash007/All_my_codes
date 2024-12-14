#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    int len = 0;
    if (n < 3) {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    if (k >= n) {
        cout << -1 << endl;
        return;
    }
    
    else {
        cout << 3 << endl;

        int i = 1;

        cout << (i + k - 1) / 2 << " "; 
        cout << k << " ";
        
        i = k + 1;
        cout << (i + n) / 2 << endl; 
    }
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
