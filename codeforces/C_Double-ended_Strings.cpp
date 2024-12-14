#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    
    string str1, str2;
    cin >> str1 >> str2;

    int len1 = str1.length();
    int len2 = str2.length();
    
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

    int maxLength = 0; 
    int endIndex = 0;  

    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i - 1; 
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    if (maxLength == 0) {
        cout << len1 + len2 << "\n";
        return;
    }
    
    cout << (len1 + len2 - 2 * maxLength) << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test; 
    cin >> test;
    
    while (test-- > 0) {
        solve();
    }

    return 0;
}
