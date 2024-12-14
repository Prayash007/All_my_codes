#include<bits\stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n,m;
    cin>>n>>m;

    string x,s;
    cin>>x>>s;

    int cnt=6;
    int res=0;
    int flag=0;

    while(cnt--)
    {
      if(x.find(s)!=string::npos)
      {
        flag=1;
        break;
      }
      else
      {
        res++;
        x+=x;
      }
    }

    if(flag==1)
    cout<<res<<endl;
    else
    cout<<-1<<endl;
  }
}
