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
  int k = 2;
  int mine = *min_element(vec.begin(),vec.end()); 
  while(k<mine){
      unordered_map<int,int>map;
      for(auto i: vec){
          int r = i%k;
          map[r]++;
      }
      if(map.size() > 2){
          k++;
      }
      else{
          break;        
      }
  }
  cout<<k<<endl;
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