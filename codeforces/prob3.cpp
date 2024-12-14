#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void snu() {
  int n; cin  >> n;
  auto q = [&](string &tt) {
    cout << '?' << ' ' << tt << endl; cout.flush();
    int b; cin >> b; cout.flush();
    return (b == 1);
  };
  string t = "";
  while(1) {
    if(t.size() >= n) break;
    t.push_back('1');
    if(q(t)) continue;
    t.pop_back(); t.push_back('0');
    if(q(t)) continue;
    t.pop_back();
    break;
  }

  while(1) {
    if(t.size() >= n) break;
    string nt = "1"; nt += t;
    if(q(nt)) {
      t = nt;
      continue;
    } else if(nt.size() == n) {
      nt = "0"; nt += t;
      cout << '!' << ' ' << nt << endl;
      cout.flush(); return;
    }

    nt = "0"; nt += t;
    if(q(nt)) {
      t = nt;
      continue;
    }
    break;
  }

  cout << '!' << ' ' << t << endl;
  cout.flush();
}

int32_t main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t; cin >> t;
  while(t--) snu();
}



/*#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string ans ="1";

    string s;
    cin>>s;

    int len =0;

    while(ans!=s && len<n)
    {
        if(?ans)
    }
    
}

int main()
{
    int test;
    cin >> test;
    while(test-- > 0)
    {
        solve();
    }
}*/