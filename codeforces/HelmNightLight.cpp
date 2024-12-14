#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];  
    for (int i = 0; i < n; i++) cin >> b[i];  
    vector<pair<int, int>> residents; 
    for (int i = 0; i < n; i++) {
        residents.push_back({b[i], a[i]});
    }
    sort(residents.begin(), residents.end());
    
    int totalResidents = 1;  
    long long totalCost = p; 
    
    for (int i = 0; i < n && totalResidents < n; i++) {
        int shareCost = residents[i].first;
        int maxShare = residents[i].second;
        
        int remainingResidents = n - totalResidents;  // Residents left to notify
        int shareCount = min(maxShare, remainingResidents);
        int currentCost = min(p, shareCost);
        
        totalCost += 1LL * currentCost * shareCount;  
        totalResidents += shareCount; 
    }
    
    cout << totalCost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
