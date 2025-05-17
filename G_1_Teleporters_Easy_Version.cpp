#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,k; cin >> n>>k;
    
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for(int i=0;i<n;i++){
      vec[i] = vec[i]+i+1;
    }
    sort(vec.begin(),vec.end());
    int i=0;
    while(i<n && k>=vec[i]){
      k-=vec[i];
      i++;
    }
    cout<<i<<endl;
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