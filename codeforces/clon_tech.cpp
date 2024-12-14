#include<bits\stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;

  vector<int>vec;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    vec.push_back(num);
  }

  unordered_map<int,int>mp;

  for(auto i: vec)
  {
    mp[i]++;
  }

  int maxe=0;

  for(auto i: vec)
  {
    maxe= max(maxe , mp[i]);
  }

  int rem = n - maxe;
  int f= maxe;
  int cnt=0;

  if(rem>=f)
  {
    while(f<=rem)
  {
    f*=2;
    cnt++;
  }
  }
  else
  {
    if(rem!=0)
    cnt++;
  }
  
  cout<<cnt+rem<<"\n";
}

int main()
{
  int test;
  cin>>test;
  while(test-->0)
  {
    solve();
  }
}