#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s; cin >> s;
    int n = s.length();
    int num1=0;
    int num0=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        num1++;
      }
      else{
        num0++;
      }
    }
    if(num1 == 0){
      cout<<0<<endl;
      return;
    }
    else if(num0 == 0){
      cout<<n*n<<endl;
      return;
    }
    s=s+s;
    int i=0;
    int maxi=0;
    int numi=0;
    for(int i = 0; i < 2*n; i++)
    {
      if(s[i]=='1')
        numi++;
      else
        numi=0;

      maxi = max(maxi, numi);
    }
    int ans=1;
    if(maxi%2==0){
      ans= (maxi/2);
      ans*=(ans+1);
    }
    else{
      ans=(maxi+1)/2;
      ans*=ans;
    }
    //int ans= ((maxi+1)/2)*((maxi-1)/2);
    cout<<ans<<endl;
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