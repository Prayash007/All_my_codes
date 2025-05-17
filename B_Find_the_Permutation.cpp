#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    deque<int>d;
    d.push_back(1);
    vector<string> vec;
    for(int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        vec.push_back(num);
    }
    vector<int>vis(n+1,-1);
    vis[1]=0;
    int k =1;
    for(auto i: vec){
      int l=0;
      for(int j =0;j<i.length();j++){
        
        if(i[j]=='1' && vis[j+1]==-1){
          l++;
          vis[j+1]++;
          if(j+1>k){
            d.push_back(j+1);
          }
          else{
            d.push_front(j+1);
          }
      }}
        if(l==0 && k!=1){
          d.push_front(k);
        }
      k++;
    }
    for(auto i: d){
      cout<<i<<" ";
    }
    cout<<endl;
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