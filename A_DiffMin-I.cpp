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
    int minv = INT_MAX;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++){

          int mini = abs(vec[i]-vec[i+1]);
          minv = min(minv, mini);
        
      }
    

    cout<<minv<<endl;
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