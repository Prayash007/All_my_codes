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

    int count=0;

    for(int i=n-1;i>0;i--)
    {
      
      while(vec[i-1]>=vec[i])
        {
          if(vec[i-1]==0)
          {
            count = -1;
            break;
          }
            vec[i-1]= (vec[i-1])/2;
            count++;
        }
        if(count == -1)
        {
          break;
        }
      }
    
    cout<<count<<'\n';
  }
}
