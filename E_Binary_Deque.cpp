#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int total = accumulate(vec.begin(), vec.end(), 0LL);
    if(total < s) {
        cout << -1 << endl;
        return;
    }

    
    int left = 0, sum = 0, maxLen = 0;
    for(int right = 0; right < n; right++) {
        sum += vec[right];
        while(sum > s) {
            sum -= vec[left++];
        }
        if(sum == s) {
            maxLen = max(maxLen, right - left + 1);
        }
    }

    if(maxLen == 0) {
        cout << -1 << endl;
    } else {
        cout << n - maxLen << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while(test--) {
        solve();
    }
}
