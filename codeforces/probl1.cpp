#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

   int ans = 0; 
   while(n > 0){
    ans += (n%k); 
   if(k==1){
    ans=n;
    break;
   } 
   else 
    n /= k; 
    }
    cout << ans << endl;
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
