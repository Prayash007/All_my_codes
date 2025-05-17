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




/*
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
  int n;
  cin>>n;
  vector<int>skip(4);
  int maxi = INT_MIN;
  int index=0;
  int sum=0;
  
  for(int i=0;i<n;i++){
      int num;
      cin>>num;
      if(num>maxi){
          maxi = num;
          skip[0]=i;
      }
  }
  sum+=maxi;
  maxi = INT_MIN;
  for(int i=0;i<n;i++){
      int num;
      cin>>num;
      if(num>maxi && skip[0]!=i){
        maxi = max(maxi, num);
        skip[1]=i;  
      }
  }
  
  sum+=maxi;
  maxi = INT_MIN;
  for(int i=0;i<n;i++){
      int num;
      cin>>num;
      if(num<=maxi || (skip[0]==i || skip[1]==i)){
        continue;
      }
      else{
        maxi = max(maxi, num);
      }
  }
  sum+=maxi;
  cout<<sum<<endl;
}

int32_t main(){
  int t;
  cin>>t;

  while(t-->0){
      solve();
  }
  
  return 0;
}*/