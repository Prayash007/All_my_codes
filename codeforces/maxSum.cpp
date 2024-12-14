#include <bits/stdc++.h>
using namespace std;

long long sumN(int n) {
    return (1LL * n * (n + 1)) / 2;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long sum1 = sumN(k);

        long long sum2 = sumN(n) - sumN(n - k);

        if (x >= sum1 && x <= sum2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
