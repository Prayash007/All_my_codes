#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a;
    
    for (int i = 0; i < n; i++)
        {int num;
          cin >> num;
        a.push_back(num);
        }

    long long sum=0;
    for(int i=0;i<n-2;i++)
    {
      sum+=a[i];
    }

    
    long long ans = a[n-1]-(a[n-2]-sum);

    cout<<ans<<endl;
    
    
}

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        solve();
    }
}
