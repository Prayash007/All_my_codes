#include<iostream>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test-->0)
  {
    int num;
    cin>>num;

    int ans =0;
    if(num>=4)
    {
    int n1= num/4;
    int n2=(num%4)/2;
    ans = n1+n2;
    }
    else
    {
      ans = num/2;
    }
    cout<<ans<<endl;
  }
}