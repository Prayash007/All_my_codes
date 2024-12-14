#include<bits\stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    int a,b;
    int xk,yk;
    int xq,yq;
    int ans=0;
    cin>>a>>b>>xk>>yk>>xq>>yq;

    if(xk == xq)
    {
      int diff = abs(yk-yq);

      if(diff/2 == a || diff/2 ==b)
      {
        ans = 2;
      }
    }
    else if(yk == yq)
    {
      int diff = abs(xk-xq);

      if(diff/2 == a || diff/2 ==b)
      {
        ans = 2;
      }
    }
    else if(abs(xk - xq) == abs(yk-yq) )
    {
      if(a+b == abs(xk-xq))
      {
        if(a!=b)
        {
          ans =2;
        }
        else
        {
          ans =1;
        }
      }
    }
    else
    ans=0;

    cout<<ans<<endl;
  }

}



/*
double d1 = abs((xk-xq)/2);
    double d2 = abs((yk-yq)/2);
    if(d1==a || d1==b || d2==a || d2==b)
    {
      cout<<
    }*/