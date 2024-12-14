#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,k; cin >> n>>k;
    unordered_map<int ,int>visited;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        b.push_back(num);
    }
    int j=b[0];
    int ans=0;
    int i= 0;
    int val=0;
    while(i<min(n,k)){
      j = max(j , b[i]);
      ans+=a[i];
      int s = ans + j*(k-i-1);
      val = max(val,s);
      i++;
    }   
    cout<<val<<endl;
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