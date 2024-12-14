#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; 
    cin >> n;
  
    vector<pair<int,int>> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(make_pair(num, i));
    }
    
    vector<int> res(n+1, 0);

    sort(vec.begin(), vec.end());
    
    int k = 1;
    for(int i = n-1; i >= 0; i -= 2) {
        res[vec[i].second+1] = k;
        if(i > 0)
            res[vec[i-1].second+1] = -k;
        k++;
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += abs(res[vec[i].second+1]) * vec[i].first;
    }

    cout << 2 * sum << "\n";  
    for(int i = 0; i <= n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int test; 
    cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}
