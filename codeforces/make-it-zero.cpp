#include<bits.\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t-->0)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        
        for(int i=0;i<n;i++)
        {
          int num;
          cin>>num;
          num=vec[i]; 
        }
        int size =vec.size();
        if(size&1)
        {
            cout<<4<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
    }
}