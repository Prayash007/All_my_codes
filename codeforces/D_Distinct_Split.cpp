#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;  

    int distR = 0;  
    int distL = 0;  

    for (int i = 0; i < n; i++) {
        if (mp2[s[i]] == 0) {
            distR++;  
        }
        mp2[s[i]]++;
    }

    int maxe = -1; 
    for (int i = 0; i < n; i++) {
        if (mp1[s[i]] == 0) {
            distL++;  
        }
        mp1[s[i]]++;
        mp2[s[i]]--;
        if (mp2[s[i]] == 0) {
            distR--; 
        }

        int k = distL + distR;
        maxe = max(maxe, k);  
    }

    cout << maxe << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
