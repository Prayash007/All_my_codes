#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    // Process unique values of x in descending order
    set<int, greater<int>> processedX(x.begin(), x.end());
    
    for (int xi : processedX) {
        int powerOf2 = 1 << xi;             // Compute 2^xi
        int increment = (xi > 0) ? (1 << (xi - 1)) : 0; // Handle xi = 0 safely

        for (int j = 0; j < n; j++) {
            // Modify a[j] until it is no longer divisible by 2^xi
            while (a[j] % powerOf2 == 0) {
                a[j] += increment;
            }
        }
    }

    // Output the modified array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
