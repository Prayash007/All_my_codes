#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int w,h; cin >> w>>h;
    
    int k; cin>>k;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int ans = INT_MIN;
    for(int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        mini = min(mini, num);
        maxi = max(maxi,num);
    }
    ans = max(ans, (maxi-mini)*h);
    mini = INT_MAX;
    maxi = INT_MIN;
    int m; cin>>m;
    for(int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        mini = min(mini, num);
        maxi = max(maxi,num);
    }
    ans = max(ans, (maxi-mini)*h);
    mini = INT_MAX;
    maxi = INT_MIN;
    int m1; cin>>m1;
    for(int i = 0; i < m1; i++)
    {
        int num;
        cin >> num;
        mini = min(mini, num);
        maxi = max(maxi,num);
    }
    ans = max(ans, (maxi-mini)*w);
    int m2; cin>>m2;
    mini = INT_MAX;
    maxi = INT_MIN;
    for(int i = 0; i < m2; i++)
    {
        int num;
        cin >> num;
        mini = min(mini, num);
        maxi = max(maxi,num);
    }
    ans = max(ans, (maxi-mini)*w);

    cout<<ans<<"\n";
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