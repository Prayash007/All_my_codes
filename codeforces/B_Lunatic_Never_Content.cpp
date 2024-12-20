#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int ans =0;
    for(int i=0;i<n;i++){
        ans = __gcd(ans, abs(vec[i]-vec[n-i-1ll]));
    }
    cout<<ans<<endl;
}

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
    int test; cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}