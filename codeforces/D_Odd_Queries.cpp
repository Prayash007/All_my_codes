#include<bits/stdc++.h>
using namespace std;

long long n,a[200005],q,sum=0,prefSum[200005],t;

void solve()
{
    int n,q;
    cin >> n>>q;

    long long sum=0;
    
    for(int i = 1; i <= n; i++)
    {   
        int num;
        cin >> num;
        a[i]=num;
        sum+=a[i];
        prefSum[i]=sum;
    }

    for(int i=0;i<q;i++){
      long long l,r,k;
      cin>>l>>r>>k;

      long long val = prefSum[n] - (prefSum[r]-prefSum[l-1])+k*(r-l+1);

      if(val%2==1){
        cout<<"YES\n";
      }
      else{
        cout<<"NO\n";
      }
    }  
}

int main()
{   
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin >> test;
    while(test-- > 0)
    {
        solve();
    }
}