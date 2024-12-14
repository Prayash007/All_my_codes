#include<bits/stdc++.h>
using namespace std;

// Comparator to sort by the first value in descending order
bool comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.first > b.first; // Sort based on the 'maxi' value in descending order
}

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> vec1;
    
    // Reading input arrays
    for (int i = 0; i < n; i++) {
        vector<int> vec;
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            vec.push_back(num);
        }
        vec1.push_back(vec);
    }
    
    vector<pair<int, pair<int, int>>> pr;
    
    // Processing arrays to get (max of first two smallest, {smallest, second smallest})
    for (int i = 0; i < n; i++) {
        // Find the two smallest elements in the current array
        int min1 = INT_MAX, min2 = INT_MAX;
        for (int j = 0; j < vec1[i].size(); j++) {
            int num = vec1[i][j];
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }
        int maxi = max(min1, min2); // max of the two smallest
        pr.push_back({maxi, {min1, min2}});
    }

    // Sort by the first value in descending order
    sort(pr.begin(), pr.end(), comp);
    
    int ans = 0;
    int mini = INT_MAX; // Track the overall minimum

    // Summing up the results
    for (int i = 0; i < n - 1; i++) {
        ans += pr[i].first; // Sum the 'maxi' values
        // Track the minimum value from the ignored pair values
        mini = min(mini,pr[i].second.first);
    }
    
    // For the last array, take the smallest of its two values
    int j = min(pr[n - 1].second.first, pr[n - 1].second.second);
    mini = min(j, mini);
    ans += mini; // Add the overall minimum to the result

    cout << ans << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
    return 0;
}
