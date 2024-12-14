#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        string s;
        cin >> s;

        long long sum = 0;
        int i = 0;
        int j = s.length() - 1;

        vector<long long>prefixSum(n);

        for(int k=0;k<n;k++)
        {
            sum+=vec[k];
            prefixSum[k]=sum;
        }


        sum=0;

        while (i < j)
        {
            while (i < j && s[i] != 'L') i++;
            
            while (i < j && s[j] != 'R') j--;

            if (i < j && s[i] == 'L' && s[j] == 'R')
            {
                if(i>0)
                sum += prefixSum[j]-prefixSum[i-1];

                if(i==0)
                sum += prefixSum[j];

                i++;
                j--;
            }
        }

        cout << sum << endl;
    }

    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, vector<int>> map;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]].push_back(i);
        }

        int m;
        cin >> m;

        vector<string> strArr(m);

        for (int i = 0; i < m; i++)
        {
            cin >> strArr[i];
        }

        vector<string> ans;

        for (int i = 0; i < m; i++)
        {
            unordered_map<char, vector<int>> mp;
            string ss = strArr[i];
            
            if (ss.length() != arr.size())
            {
                ans.push_back("NO");
            }
            else
            {
                bool isMatch = true;
                for (int j = 0; j < ss.length(); j++)
                {
                    mp[ss[j]].push_back(j);
                }
                
                for (int j = 0; j < ss.length(); j++)
                {
                    if (map[arr[j]].size() != mp[ss[j]].size())
                    {
                        isMatch = false;
                        break;
                    }

                    for (int k = 0; k < mp[ss[j]].size(); k++)
                    {
                        if (mp[ss[j]][k] != map[arr[j]][k])
                        {
                            isMatch = false;
                            break;
                        }
                    }
                    if (!isMatch)
                        break;
                }

                if (isMatch)
                    ans.push_back("YES");
                else
                    ans.push_back("NO");
            }
        }

        for (auto &i : ans)
        {
            cout << i << endl;
        }
    }
}
*/


/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, bool> occ;
        string ans = "YES";
        int los = arr[0];
        
        for (int i = 1; i < n; i++)
        {
            occ[los] = true;
            if ((i + 1 <= n && occ[arr[i]+1] == true))
            {
                los = arr[i];
            }
            else if(occ[arr[i]-1] == true)
            {
                los = arr[i];
            }
            else
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}

*/



/*
#include<bits\stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test-->0)
  {
    int a;
    cin>>a;

    string s = to_string(a);
    string ans = "NO";
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='1')
      {
        if(s[i+1]=='0')
        {
          if(s[i+2]>'1')
          {
            ans="YES";
            break;
          }
          else if(s[i+2]=='1' && i+2 !=s.length()-1)
          {
            ans="YES";
            break;
          }
        }
      }
    }
    cout<<ans<<endl;
  }
}*/