#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;

      vec[i]=num;
    }

    int ans=0;

    for(int i=1;i<=n;i++)
    {
      int diff = abs(vec[i-1]-i);

      if(diff!=0)
      {
        ans = __gcd(ans,diff);
      }
    }
    cout<<ans<<endl;

  }
}