#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    int mini = LLONG_MAX;  // Using LLONG_MAX for safety with long long values

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mini = min(mini, abs(num)); // Using abs() instead of manual absolute calculation
    }
    
    cout << mini << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
}
