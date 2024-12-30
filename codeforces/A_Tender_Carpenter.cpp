#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    

    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int num=0;
    for(int i=1;i<n;i++){
      int j=i-1;

      int a = min(vec[i],vec[j]);
      int b = max(vec[i],vec[j]);

      if(2*a <= b) {
        num++;
      }
    }
    if(num >= n-1) cout<<"NO\n";
     else
      cout<<"YES\n";
}

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
    int test; cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}