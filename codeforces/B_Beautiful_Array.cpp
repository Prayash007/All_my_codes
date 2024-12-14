#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define int long long

signed main() {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int t;
    cin >> t;
    while (t--) {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector <int> a(n);
        a[0] = k * b;
        s -= k * b;
        if (s < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(k - 1, s);
                a[i] += now;
                s -= now;
            }
            if (s > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
    }
}

/*
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    // Correct maxSum calculation
    int maxSum = (k * b) + (n - 1) * (k - 1);

    // Base case: If the sum 's' is impossible, output -1
    if (s > maxSum || s < b * k) {
        cout << -1 << endl;
        return;
    }

    vector<int> vec(n, 0);

    // First element will be at least 'b * k'
    vec[0] = b * k;
    s -= b * k;

    // Distribute the remaining 's' to other elements
    for (int i = 0; i < n && s > 0; ++i) {
        int add = min(s, k - 1);
        vec[i] += add;
        s -= add;
    }

    // Output the result
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        solve();
    }
}*/




