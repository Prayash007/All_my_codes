#include<bits/stdc++.h>
using namespace std;
# define ll long long
void solve()
{
    ll i, num;
    cin >> num;

    string s = to_string(num);

    int n=s.length();
    i =n-1;
    int ans=0;

    while(i>=0)
    {
        if(s[i]=='5')
        {int k=i;
            while(i>=0)
            {
                if(s[i]=='2'|| s[i]=='7')
                {
                    ans = n-i-2;
                    break;
                }
                i--;
            }
        }
        else if(s[i]==0 && s[i-1]!=0)
        {int k=i;
            while(i>=0)
            {
                if(s[i]=='0' || s[i]=='5')
                {
                    ans = n-i-2;
                    break;
                }
                i--;
            }

        }
        else if(s[i]==0 && s[i-1]==0)
        {
            ans = n-(i+1);
        }

        i--;
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