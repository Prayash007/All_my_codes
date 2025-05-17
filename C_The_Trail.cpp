#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solveTestCase() {
    int n, m;
    cin >> n >> m;

    string path;
    cin >> path;

    vector<vector<long long>> grid(n, vector<long long>(m));
    vector<long long> rowSum(n, 0), colSum(m, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            rowSum[i] += grid[i][j];
            colSum[j] += grid[i][j];
        }
    }

    int row = 0, col = 0;
    for (char step : path) {
        if (step == 'D') {
            grid[row][col] = -rowSum[row];
            rowSum[row] += grid[row][col];
            colSum[col] += grid[row][col];
            row++; // Move down
        } else if (step == 'R') {
            grid[row][col] = -colSum[col];
            rowSum[row] += grid[row][col];
            colSum[col] += grid[row][col];
            col++; 
        }
    }

    grid[row][col] = -rowSum[row]; 
    rowSum[row] += grid[row][col];
    colSum[col] += grid[row][col];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
