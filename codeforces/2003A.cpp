#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin>>s;

    if(s[0]==s[n-1])
      cout<<"no\n";
    else
      cout<<"yes\n";
    
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