#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll x, n;
    cin >> x >> n;

    ll y = n % 4;
    ll pos;

    if (y == 0)
        pos = 0;           // No change in position
    else if (y == 1)
        pos = -n;          // Negative of n
    else if (y == 2)
        pos = 1;           // Add 1
    else if (y == 3)
        pos = n + 1;       // Add n + 1

    if (x % 2 == 0) {
        cout << x + pos << endl;
    } else {
        cout << x - pos << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
    return 0;
}
