#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9+7; // Use modular arithmetic to avoid overflow

void solve()
{
    int n; cin >> n;
    
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());

    int result = 1;
        for (int i=0; i<n; i++){
            int geq_count = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            result = result * max(geq_count - i, 0ll) % MOD;
        }
        cout << result << "\n";
    /*or(auto m : sv) {
        int f = m - (k--); // Calculate the number of valid combinations
        if(f <= 0) {
            cout << 0 << endl; // If no valid combinations remain, answer is 0
            return;
        }
        ans = (ans * f) % MOD; // Modular multiplication to prevent overflow
    }*/

    //cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int test; cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}
