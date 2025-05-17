#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x; cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) cin >> vec[i];
    
    sort(vec.begin(), vec.end());

    // Create prefix sum
    vector<int> preSum(n);
    preSum[0] = vec[0];
    for (int i = 1; i < n; ++i)
        preSum[i] = preSum[i - 1] + vec[i];

    int k = 0;
    int ans = 0;
    while (true) {
        int low = 0, high = n - 1, best = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int cost = preSum[mid] + (mid + 1) * k;
            if (cost <= x) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (best == -1) break;
        
        ans += (best + 1);
        k++;
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int test; cin >> test;
    while (test--) {
        solve();
    }
}
