#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    
    vector<int> a(n);  // a[i] is how many residents the i-th person can notify
    vector<int> b(n);  // b[i] is the cost of notifying each resident for the i-th person
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // We want to notify all n residents with minimum cost
    vector<pair<double, int>> efficiency;
    
    // Calculate efficiency as a[i] / b[i] for each resident
    for(int i = 0; i < n; i++) {
        if (b[i] > 0) {
            efficiency.push_back({(double)a[i] / b[i], i});
        }
    }
    
    // Sort by efficiency in descending order (more people notified per unit cost first)
    sort(efficiency.rbegin(), efficiency.rend());

    // Now we need to decide how to notify the residents
    vector<bool> notified(n, false);  // To keep track of who has been notified
    int total_notified = 0;           // To track how many residents have been notified
    long long total_cost = 0;         // Total cost to notify all residents
    
    // Start by notifying some residents directly
    for (auto e : efficiency) {
        int idx = e.second;
        
        // If this person is not notified, notify them directly
        if (!notified[idx]) {
            total_cost += p;  // Cost to notify this person directly
            notified[idx] = true;
            total_notified++;

            // Now this person can share the news with `a[idx]` others at cost `b[idx]` per share
            for (int j = 0; j < a[idx] && total_notified < n; j++) {
                total_cost += b[idx];  // Sharing cost
                total_notified++;      // Increment the number of notified residents
            }
        }

        if (total_notified >= n) break;  // Stop if all residents have been notified
    }
    
    // Output the total minimum cost
    cout << total_cost << endl;
}

int main() {
    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }
    return 0;
}
