#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k; 
    cin >> n >> k;

    unordered_map<int, int> category_sum;
    for (int i = 0; i < k; i++) {
        int b, c;
        cin >> b >> c;
        category_sum[b] += c;
    }

    vector<int> sums;
    for (auto& entry : category_sum) {
      
        sums.push_back(entry.second);
    }

    sort(sums.rbegin(), sums.rend());  

    int ans = 0;
    for (int i = 0; i < min(n, (int)sums.size()); i++) {
        ans += sums[i];
    }

    cout << ans << endl;
  }

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}




















#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    

    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
}

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
    int test; cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}
