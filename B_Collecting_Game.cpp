#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> vec(n); // Stores {value, index}
    vector<int> prefixSum(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec[i] = {num, i};
    }

    // Sort vec based on values
    sort(vec.begin(), vec.end());

    // Create sorted prefix sum
    prefixSum[0] = vec[0].first;
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + vec[i].first;
    }

    int i = 0, j = 0;
    while (i < n && j < n) {
        if (prefixSum[j] >= vec[i].first) {
            ans[vec[i].second] = j; // Store the 1-based index of the prefix sum
            i++;
        } else {
            j++;
        }
    }

    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
