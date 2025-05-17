#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    

    int a,b;
    cin>>a>>b;

    int k = abs(a-b);

    if(k%2 != 0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
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