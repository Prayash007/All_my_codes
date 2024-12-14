#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long power(long long a, long long b, long long MOD) {
    if (b == 0)
        return 1;
    long long t = power(a, b / 2, MOD);
    if (b % 2 == 0)
        return t * t % MOD;
    else
        return t * t * a % MOD;
}

int countEqualSumPairs(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    unordered_map<int, int> prefixSumMap;
    int prefixSumDiff = 0;
    int count = 0;

    prefixSumMap[0] = 1;

    for (int i = 0; i < n; ++i) {
        prefixSumDiff += a[i] - b[i];
        if (prefixSumMap.find(prefixSumDiff) != prefixSumMap.end()) {
            count += prefixSumMap[prefixSumDiff];
        }
        prefixSumMap[prefixSumDiff]++;
    }

    return count;
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> ans(n);
    for (int i = 0; i < n; i++) {
        if (a[i] != n)
            ans[i] = a[i] + 1;
        else
            ans[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}