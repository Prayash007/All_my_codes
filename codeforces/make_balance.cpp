#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    vector<int>diffArr(n-1);

    for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      arr[i]=num;
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<n-1;i++)
    {
      diffArr[i]= abs(arr[i]-arr[i+1]);
    }

    int maxo=0;
    int flag=0;

    for(int i: diffArr)
    {
      if(i<=k)
      {
        flag++;
        maxo = max(maxo ,flag);
      }
      else
      {
        
        flag=0;
      }
    }
    cout<<n-1-maxo<<endl;
  }
}