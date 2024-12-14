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

    if(vec[0]==1)
    {
      vec[0]++;
    }

    for(int i=1;i<n;i++)
    {
      if(vec[i]==1 && i<n-1)
      {
        vec[i]++;
      }
      if(vec[i]%vec[i-1]==0)
      {  
           vec[i]++;
        
      }
    }
    
    

    for(auto i : vec)
    {
      cout<<i<<" ";
    }
    cout<<'\n';
  }
}