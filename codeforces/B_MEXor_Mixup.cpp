#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    int x = 0;
    for (int i = 1; i < n; i++) {
        x ^= i;
    }

    if (x == k) {
        cout << n << "\n";        
    } 
    else if ((x ^ k) == n) {
        cout << n + 2 << "\n";   
    } 
    else {
        cout << n + 1 << "\n";    
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
