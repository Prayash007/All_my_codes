#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s; 

    if(n-k<=1){
      cout<<"YES\n";
      return;
    }

    unordered_map<char, int> mp;
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    for (char a = 'a'; a <= 'z'; a++) { 
        if (mp[a] % 2 == 0 && mp[a] > 0) {
            even++;
        } else if (mp[a] % 2 == 1) {
            odd++;
        }
    }

    if(odd==0 && k%2==0){
      if(even/k>1){
        cout<<"YES\n";
        return;
      }
      else{
        cout<<"NO\n";
        return;
      }
    }
    else if(odd!=0){
      k = odd-k;
      
    }

    // If none of the conditions satisfy, return "NO"
    cout << "NO\n";
}

int main() {
    int test;
    cin >> test;
    while (test-- > 0) {
        solve();
    }
}
