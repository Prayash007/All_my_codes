#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    unordered_map<int, int> mp;
    unordered_map<int, int> prev;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        mp[vec[i]]++;
    }

    vector<int> vec1(n);
    iota(vec1.begin(), vec1.end(), 1); 

    // Check if any number appears only once
    for (auto &x : mp) {
        if (x.second == 1) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        if (prev.count(vec[i])) {
            swap(vec1[i], vec1[prev[vec[i]]]);
        }
        prev[vec[i]] = i; // Store the last index of the current value
    }

    for (auto &i : vec1) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
