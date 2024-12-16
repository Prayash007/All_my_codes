#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        unordered_map<int, vector<int>> modGroups; // Map to store groups based on x % k

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            modGroups[a[i] % k].push_back(i + 1); // Store 1-based index
        }

        bool found = false;
        int chosenIndex = -1;

        for (auto& group : modGroups) {
            if (group.second.size() == 1) { // If only one element in this group
                found = true;
                chosenIndex = group.second[0];
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
            cout << chosenIndex << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
