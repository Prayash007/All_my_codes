#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.length();

    int cnt0 = 0, cnt1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }

    int initial_cnt0 = cnt0;
    int initial_cnt1 = cnt1;
    
    int ans = 0;

    for(int i = 0; i <n; i++)
    {
        if(s[i]=='1')
        {
          if(cnt0>0)
            cnt0--;
          else
            {
              ans = n-i;
              break;
            }
        }
        else
        {
          if(cnt1>0)
            cnt1--;
          else
            {
              ans = n-i;
              break;
            }
        }  
    }

    cout << ans << endl;
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
