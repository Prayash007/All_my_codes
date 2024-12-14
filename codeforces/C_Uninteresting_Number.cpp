#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    string s = to_string(n);

    int twos=0;
    int threes=0;
    int sum =0;
    bool ans = false;

    for(auto i: s){
      if(i == '2'){
        twos++;
      }
      if(i == '3'){
        threes++;
      }
      sum += (int)i-'0';
    }
    int k = min(10ll,twos+1);
    int l = min(10ll,threes+1);

    for(int i=0;i<k;i++){
      for(int j =0; j<l;j++){
        if((i*2+j*6+sum)%9==0){
          cout<<"YES"<<endl;
          return;
        }
      }
    }
      cout<<"NO"<<endl;
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