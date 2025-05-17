#include<bits/stdc++.h>
using namespace std;

#define int long long

bool solve()
{
    int n, k; 
    cin >> n >> k;

    vector<vector<int>> vec(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    int changes = 0; 
    for (int i = 0; i < n/2; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int mirrored_i = n - 1 - i;
            int mirrored_j = n - 1 - j;

            if (vec[i][j] != vec[mirrored_i][mirrored_j]) 
            {
                changes++;
                //vec[i][j] = 88;
            }
        }
    }

    if(n%2!=0){

      for(int j=0;j<=n/2;j++){
        int mirrored_j = n - 1 - j;
        if(vec[n/2][j]!=vec[n/2][mirrored_j]){
            changes++;
            //vec[n/2][j] = 88;
        }
      }
    }
    /*
    for(auto i: vec){
      for(auto j: i){
        cout<<j<<" ";
      }
      cout<<"\n";
    }
    */
    if (changes > k) 
    {
        return false;
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int test; 
    cin >> test;
    
    while (test-- > 0)
    {
        if (solve()) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
}
