#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,x; cin >> n>>x;
    int ans = 0;
    stack<int>st1;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st1.push(num);
    }
    stack<int>st2;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st2.push(num);
    }
    stack<int>st3;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st3.push(num);
    }

    while(!st1.empty() && !st2.empty() && !st3.empty()){
      int a = st1.top();
      int b = st2.top();
      int c = st3.top();

      if(a>x && b>x && c>x){
        break;
      }
      int k = min(a,b,c);

      if(k==a) st1.pop();
      if(k==b) st2.pop();
      if(k==c) st3.pop();

      ans = ans | k ;
      
    }
    if(ans == x){
      cout<<"YES\n";
    }
    else
      cout<<"NO\n";
}

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
    int test; cin >> test;
    
    while(test-- > 0)
    {
        solve();
    }
}


/*
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    // Read input stacks
    vector<int> st1(n), st2(n), st3(n);
    for (int i = 0; i < n; i++) cin >> st1[i];
    for (int i = 0; i < n; i++) cin >> st2[i];
    for (int i = 0; i < n; i++) cin >> st3[i];

    // Reverse the arrays to simulate stacks
    reverse(st1.begin(), st1.end());
    reverse(st2.begin(), st2.end());
    reverse(st3.begin(), st3.end());

    // Use a queue for BFS to explore all combinations
    queue<tuple<int, int, int, int>> q; // (ans, i1, i2, i3)
    q.push({0, 0, 0, 0}); // Start with an empty OR and all indices at 0

    while (!q.empty()) {
        // Extract variables from the tuple
        tuple<int, int, int, int> current = q.front();
        q.pop();
        int ans = get<0>(current);
        int i1 = get<1>(current);
        int i2 = get<2>(current);
        int i3 = get<3>(current);

        // If `ans` equals `x`, we found a solution
        if (ans == x) {
            cout << "YES\n";
            return;
        }

        // Try popping from each stack if possible
        if (i1 < n) q.push({ans | st1[i1], i1 + 1, i2, i3});
        if (i2 < n) q.push({ans | st2[i2], i1, i2 + 1, i3});
        if (i3 < n) q.push({ans | st3[i3], i1, i2, i3 + 1});
    }

    // If no combination achieves `x`, output NO
    cout << "NO\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while (test-- > 0) {
        solve();
    }
}

*/