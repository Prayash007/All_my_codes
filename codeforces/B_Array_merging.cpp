#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Merging elements into c based on some condition
    vector<int> c;
    int i=0;
    int j=0;

    while(i<n && j<n){
        c.push_back(a[i]);
        i++;
        c.push_back(b[j]);
        j++;
      
    }
    while(i<n){
      c.push_back(a[i++]);
    }
    while(j<n){
      c.push_back(b[j++]);
    }

    
    // Sort the merged vector
    sort(c.begin(), c.end());


    // Count maximum frequency of consecutive identical elements
    int ans = 1, maxCount = 1;
    for (int i = 1; i < 2*n; i++) {
        if (c[i] == c[i-1]) {
            ans++;
        } else {
            maxCount = max(maxCount, ans);
            ans = 1;  // Reset for the next set of consecutive elements
        }
    }
    maxCount = max(maxCount, ans);  // Final check for the last sequence
    
    cout<<maxCount<<endl;
  
    
}

int main()
{
    int test;
    cin >> test;
    while(test-- > 0)
    {
        solve();
    }
}
