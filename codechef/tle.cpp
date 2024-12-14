#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n;
        cin >> n;
        
        vector<int>vec(n);
        
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            vec[i]=num;
        }
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int k=0;
                int m=j;
                
                int f3=0;
                int f2=0;
                int f1=0;
                
                
                while(k<i && m<n)
                {
                    if(vec[k]==3 || vec[m]==3)
                    f3++;
                    else if(vec[k]==2 || vec[m]==2)
                    f2++;
                    else if(vec[k]==1 || vec[m]==1)
                    f1++;
                    
                    k++;
                    m++;
                    
                }
                while(k<i)
                {
                    
                    if(vec[k]==3 )
                    f3++;
                    else if(vec[k]==2 )
                    f2++;
                    else if(vec[k]==1 )
                    f1++;
                    
                    k++;
                    
                }
                while(m<n)
                { 
                    if(vec[m]==3)
                    f3++;
                    else if(vec[m]==2)
                    f2++;
                    else if(vec[m]==1)
                    f1++;
                    
                    m++;
                }
                
                if(f1==0 || f2==0 || f3==0)
                {
                    for(int h=i;h<j;h++)
                    {
                        if(f1==0 && vec[h]==3)
                        {
                            f1++;
                        }
                        if(f2==0 && vec[h]==1)
                        {
                            f2++;
                        }
                        if(f3==0 && vec[h]==2)
                        {
                            f3++;
                        }
                    }
                    
                    if(f1!=0 && f2!=0 && f3!=0)
                    {
                        count++;
                    }
                }
                else
                {
                    count++;
                }
            }
        }
        
        cout<<count<<endl;

}
}