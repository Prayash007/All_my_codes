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

    int i=0;
    int j=n-1;
    int ans=0;

    while(vec[i]==0 && i<n)i++;
    while(vec[j]==0 && j>=0)j--;

    if(j==-1)
    {
      cout<<0<<'\n';
    }
    else
    {
      ans =1;
      for(int k=i;k<j;k++)
    {
      if(vec[k]==0)
      {
        ans=2;
        break;
      }
    }

    cout<<ans<<'\n';
    }
  }
}