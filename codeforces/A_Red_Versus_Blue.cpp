#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int reqr = 0;
    int cntr = 0;
    string ans = "";

    int k = r % (b + 1);
    int d = r / (b + 1);


    for (int i = 0; i < n; i++) {
      reqr = k>0?d+1:d;
     
        if (cntr < reqr && r>0) {
            ans += 'R';
            cntr++;
            r--;
        } else {
            if (b > 0) {
                ans += 'B';
                b--;
                cntr = 0;
                k--;
            } 
        }
    }
    
    cout << ans << "\n";
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}