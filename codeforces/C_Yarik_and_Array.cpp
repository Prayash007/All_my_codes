#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int p1 = 0;
    int ans = vec[0];
    int curr_sum = vec[0];

    for (int p2 = 1; p2 < n; p2++) {
        if (abs(vec[p2]) % 2 != abs(vec[p2-1]) % 2) {
            if(curr_sum>0){
            curr_sum += vec[p2];}
            else
            curr_sum = vec[p2];
            ans = max(ans, curr_sum);  
        } else {
            curr_sum = vec[p2];
            ans = max(ans, curr_sum);
            
        }
    }

    cout << max(ans, curr_sum) << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
