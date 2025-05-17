#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    

    vector<pair<int,int>> vec(n);
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec[i].first = num;
    }
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec[i].second = num;
    }
    int c=0;
    int k =0;
    int g =INT_MAX;
    for(auto i: vec){
      if(i.second>i.first){
        c++;
        k = i.second - i.first;
      }
      else
      g = min(g,(i.first-i.second));
    }
    if(c>1){
      cout<<"NO"<<endl;
    }
    else{
      if(k>g){
        cout<<"NO"<<endl;
      }
      else
        cout<<"YES"<<endl;
    }

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