#include<bits\stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans=0;
    int flag=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
      if(s[i]=='.')
      {
        count++;
        flag++;
        if(flag==3)
        {
          ans =2;
          break;
        }
        
         
      }
      else if(s[i]=='#')
      {
        flag=0;
      }
    }

    if(ans==0)
    {
      ans = count;
    }
    cout<<ans<<endl;
  }
}   