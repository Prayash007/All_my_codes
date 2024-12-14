#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int num1 = 0;

    for (int i = 0; i < 2 * n; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            num1++;
        }
    }

    if(num1>n){
      num1 = n - (num1-n);
    }

    int minv = num1 % 2;           
    int maxv = min(num1,n);   

    cout << minv << " " << maxv << "\n";
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
