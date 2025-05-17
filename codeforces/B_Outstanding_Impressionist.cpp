#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    
    vector<int> l(n);
    vector<int> r(n);
    for(int i = 0; i < n; i++)
    {
        cin >> l[i];
        cin >> r[i];
    }
      
    vector<vector<int>> ind(2 * n);
    vector<int> ans(n, 1);
    for(int i = 0; i < n; i++)
    {
        if(l[i] == r[i])
        {
            ind[l[i]].push_back(i);
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(l[i] == r[i]) continue;
        int no = 0;
        for(int j = l[i]; j <= r[i]; j++)
        {
            if(ind[j].size() == 0) no++;
        }
        if(no == 0)
        {
            ans[i] = 0;
        }
    }
    for(int i = 0; i < 2 * n; i++)
    {
        if(ind[i].size() > 1)
        {
            for(auto j : ind[i])
            {
                ans[j] = 0;
            }
        }
    }
    
    // Print the ans vector as a single string
    for(int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << "\n";
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
