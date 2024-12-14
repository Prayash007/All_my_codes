/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;

      vec[i]=num;
    }

    unordered_map<int ,int>mp;

    for(int i=0;i<n;i++)
    {
      mp[vec[i]]++;
    }
    int maxe=0;

    for(auto i: vec)
    {
      if(mp[i]>maxe)
      maxe=mp[i];
    }
    cout<<n-maxe<<'\n';
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            
            cout << -1 << '\n';
        } else {
            vector<int> ans;

            
            for (int i = n; i > 0; i--) {
                if (i % 2 != 0) {
                    ans.push_back(i);
                }
            }

            
            for (int i = n; i > 0; i--) {
                if (i % 2 == 0) {
                    ans.push_back(i);
                }
            }

            
            for (auto i : ans) {
                cout << i << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
*/




