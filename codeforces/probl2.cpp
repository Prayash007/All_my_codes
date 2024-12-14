#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; 
    cin >> n;

    long long a = n; 

    while (true) {
        long long flag = sqrt(a);
        if (n == a - flag) {
            cout << a << endl;
            return; 
        }
        a++; 
    }
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
