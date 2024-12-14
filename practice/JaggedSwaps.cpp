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

    vector<int>vec;

    int n1;
    cin>>n1;

    vec.push_back(n1);

    int mini=n1;
    
    for (int i = 1; i < n; i++)
    {
      int num;
      cin>>num;
      vec.push_back(num);

      mini = min(mini,num);
    }

    if(vec[0]==mini)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
    
  }
}