#include<bits\stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n,k;
    cin>>n>>k;

    vector<int>nums;

    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      nums.push_back(a);
    }
    int flag=0;
    for(auto i:nums)
    {
      if(k==i)
      {
        flag++;
      }
    }

    if(flag!=0)
    {
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
}