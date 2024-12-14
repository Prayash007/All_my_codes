#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,p;
    cin >> n>>p;

    vector<int> vec;
    int nume=0;
    int numf =0;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num%2==0){nume++;}
        vec.push_back(num);
    }
    int k=p;

    vector<int>plusVar;
    for(int i=0;i<n;i++){
      if(vec[i]%k==0){
        plusVar.push_back(0);
      }
      else{
        int l = floor((vec[i]/k));
        plusVar.push_back(k*(l+1)-vec[i]);
      }
    }
    int mini = *min_element(plusVar.begin(),plusVar.end());

    if(p==4 && n>=2){
      int res =max(0,2-nume);
      cout<<min(res,mini)<<endl;
    }
    else
    cout<<mini<<endl;
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