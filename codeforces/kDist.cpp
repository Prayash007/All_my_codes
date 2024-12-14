#include<bits\stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test-->0)
  {
    int xc,yc,k;
    cin>>xc>>yc>>k;
    
    int start_index = xc-(k/2);
    int end_ind = xc+(k/2);

    vector<pair<int,int>>vec;

    for(int i=start_index;i<=end_ind;i++)
    {
      if(i==xc&& k%2==0)
      {
      continue;
      }
      else
      {
      pair<int,int>pr = make_pair(i,yc);
      vec.push_back(pr);
      }
    }

    for(int i=0;i<k;i++)
    {
      cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
  }
}
