/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, q;
        cin >> n >> q;

        string s1, s2;
        cin >> s1;
        cin >> s2;

        vector<pair<int, int>> query(q);
        for (int i = 0; i < q; i++)
        {
            cin >> query[i].first >> query[i].second;
        }

        for (int i = 0; i < q; i++)
        {
            string ss1 = s1.substr(query[i].first - 1, query[i].second - query[i].first + 1);
            string ss2 = s2.substr(query[i].first - 1, query[i].second - query[i].first + 1);
            
            sort(ss1.begin(), ss1.end());
            sort(ss2.begin(), ss2.end());

            int len =query[i].second - query[i].first + 1;

            int flag = 0;
            int a=0;
            int b=0;
            while(a<len  &&  b<len)
            {
                if (ss1[a] > ss2[b])
                {
                  flag++;
                  b+=1;
                }
                else if(ss1[a] < ss2[b])
                {
                  flag++;
                  a+=1;
                }
                else if(ss1[a]==ss1[b])
                {
                  a+=1;
                  b+=1;
                }
            }
            while(a< len)
            {
                flag++;
            }
            while(b< len)
            {
                flag++;
            }

            cout << flag << endl;
        }
    }
    return 0;
}*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, q;
        cin >> n >> q;

        string s1, s2;
        cin >> s1;
        cin >> s2;

        vector<pair<int, int>> query(q);
        for (int i = 0; i < q; i++)
        {
            cin >> query[i].first >> query[i].second;
        }

        for (int i = 0; i < q; i++)
        {
            string ss1 = s1.substr(query[i].first - 1, query[i].second - query[i].first + 1);
            string ss2 = s2.substr(query[i].first - 1, query[i].second - query[i].first + 1);
            
            sort(ss1.begin(), ss1.end());
            sort(ss2.begin(), ss2.end());

            int len = query[i].second - query[i].first + 1;

            int flag = 0;
            int a = 0;
            int b = 0;
            while (a < len && b < len)
            {
                if (ss1[a] > ss2[b])
                {
                    flag++;
                    b++;
                }
                else if (ss1[a] < ss2[b])
                {
                    flag++;
                    a++;
                }
                else
                {
                    a++;
                    b++;
                }
            }
            while (a < len)
            {
                flag++;
                a++;
            }
            while (b < len)
            {
                flag++;
                b++;
            }

            cout << flag/2 << endl;
        }
    }
    return 0;
}

