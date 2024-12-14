#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    
    if(n==1 || n==2 || n==3){
      cout<<0<<endl;
      return 0;
    }
    int ans =1;
      int k=1;
      for(int i=4;i<=n;i++){
        ans*=i;
      }
      for(int i=1;i<=n-3;i++){
        k*=i;
      }
      int m = (ans/k);
    if(n%3==0){
      cout<<m-(n/3)<<endl;
    }
    else{
      cout<<m<<endl;
    }
}