#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,m; cin >> n>>m;

    int pm = m*4;
    int ans =pm;

    vector<pair<int,int>>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i].first;
        cin>>vec[i].second;
    }

    for(int i=1;i<n;i++){
        int k = m - vec[i].first;
        int j = m - vec[i].second;
        int ov = 0;
        if(k>0 && j>0){
            ov = (k+j)*2;
        }
        ans += pm -ov;
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