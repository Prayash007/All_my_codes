#include<bits/stdc++.h>
using namespace std;
long long func(long long k, vector<long long>vec){
  long long sum =0;
  for(auto i: vec){
    sum+=max((k-i),0ll);
  } 
  return sum;
}
void solve()
{
    int n;
    long long x;
    cin >> n>>x;

    vector<long long> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    long long low =0;
    long long high = 2e9;
    int ans=-1;

    while(low<high){
      long long mid = low + (high - low +1)/2;

      if(func(mid, vec)>x){
        high = mid-1;
      }
      else if(func(mid, vec)<=x){
        low = mid;
      }
    }
      ans = low;
    cout<<ans<<"\n";
}

int main()
{
    int test;
    cin >> test;
    while(test-- > 0)
    {
        solve();
    }
}