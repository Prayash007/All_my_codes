#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char c;
    cin >> n>>c;

    string s;
    cin>>s;

    string s2 = s.append(s);
    int l=-1;
    int ans = -1e9;
    for(int i=s2.length()-1;i>=0;i--){
      if(s2[i]=='g'){
        l=i;
      }
      if(s2[i]==c){
        ans = max(ans, l-i);
      }
    }
    cout<<ans<<endl;
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