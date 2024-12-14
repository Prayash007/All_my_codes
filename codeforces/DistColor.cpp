#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int a,b,c;

    cin>>a>>b>>c;

    int ans=0;

    if(c>=a && c>=b)
    {
      ans = a*b;
    }
    else if(c<a && c<b)
    {
      ans = c*c;
    }
    else if(c>=a && c<=b)
    {
      ans = c*a;
    }
    else
    {
      ans = c*b;
    }

    cout<<ans<<endl;
  }
}
