#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin >> n>>x;

    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    vector<int>redv;
    for(int i=0;i<n;i++)
    {int sum =0;
      if(vec[i]%3==0)
      {
        redv.push_back(vec[i]);
      }
      if(vec[i]%3!=0)
      {
        while(vec[i]%3!=0 && i<n)
        {
          sum+=vec[i++];
        }
        redv.push_back(sum);
      }
    }
    int sum=0;
    for(auto i : vec)
    {
      if(i%3!=0)
      {
        sum+=(i/x)+1;
      }
      else
      sum += (i/x);

    }
    int sum2=0;
    for(auto i : redv)
    {
      if(i%3!=0)
      {
        sum2+=(i/x)+1;
      }
      else
      sum2 += (i/x);
    }
    
    cout<<sum2<<" "<<sum<<endl;

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