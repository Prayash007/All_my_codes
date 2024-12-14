#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b;
    cin >>a>>b>>n;

    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    long long sum=0;

    for(auto i : vec){
      sum+=min(i,a-1);
    }
    sum+=b;

    cout<<sum<<endl;
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