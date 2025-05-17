#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    
    sum = (n-1*(n)*(n+1))/3;
    int g = (n*(n+1)*(2*n+1))/6;

    int l = sum+g;

    int k = (2022 * l) % MOD;  // Multiply by 2022, take modulo
    cout << g << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    
    while (test-- > 0) {
        solve();
    }

    return 0;
}
