#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    // If no fruits to blend
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    long long ans = 0;

    if (y <= x) {
        ans = (n + y - 1) / y;  // ceil(n / y)
    } else {
        ans = (n + x - 1) / x;  // ceil(n / x)
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