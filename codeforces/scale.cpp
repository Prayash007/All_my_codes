#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
          for(int j=0;j<n;j++)
          {
            cin >> arr[i][j];
          }
        }
        
        int red = n / k;
        vector<vector<char>> ans(red, vector<char>(red));
        
        for (int i = 0; i < red; i++)
        {
            for (int j = 0; j < red; j++)
            {
                ans[i][j] = arr[i * k][j * k];
            }
        }
        
        for (int i = 0; i < red; i++)
        {
            for (int j = 0; j < red; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
