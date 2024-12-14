#include <bits/stdc++.h>
using namespace std;

#define int long long

int findPattern(vector<vector<int>>& mat, int n, int m) {
    int count = 0;
    vector<int> pattern = {1, 5, 4, 3};

    for (int layer = 0; layer < (min(n, m) + 1) / 2; ++layer) {
        vector<int> seq;
        
        // Collect elements in a clockwise manner for the current layer
        for (int j = layer; j < m - layer; ++j) seq.push_back(mat[layer][j]);
        for (int i = layer + 1; i < n - layer; ++i) seq.push_back(mat[i][m - layer - 1]);
        for (int j = m - layer - 2; j >= layer; --j) seq.push_back(mat[n - layer - 1][j]);
        for (int i = n - layer - 2; i > layer; --i) seq.push_back(mat[i][layer]);

        // Make the sequence circular by appending the first 3 elements
        int border_elements = seq.size();
        for (int i = 0; i < 3; ++i) {
            seq.push_back(seq[i % border_elements]);
        }

        // Pattern matching for "1543"
        int p = 0;
        for (int num : seq) {
            if (num == pattern[p]) {
                p++;
                if (p == 4) {
                    count++;
                    p = 0;
                }
            } else {
                p = (num == pattern[0]) ? 1 : 0;
            }
        }
    }
    return count;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            mat[i][j] = row[j] - '0';
        }
    }
    cout << findPattern(mat, n, m) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
