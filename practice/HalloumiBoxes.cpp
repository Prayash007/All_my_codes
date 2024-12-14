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

    vector<int>nums1;
    vector<int>nums2;
    int temp=n;
    bool ans = true;
    while(temp-->0)
    {
      int inp;
      cin>>inp;

      nums1.push_back(inp);
      nums2.push_back(inp);
    }
    int size = nums1.size();
    if(k==1)
    {
      sort(nums2.begin(),nums2.end());
      int i=0;
      while(size-->0)
      {
        if(nums1[i]!=nums2[i])
        {
          ans=false;
          break;
        }
        i++;
      }
    }
    if(ans)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }

  }
}