#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mp;
    
    // Store the first occurrence of each character
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s[i]) == mp.end()) // If character is seen for the first time
        {
            mp[s[i]] = i; // Store the 0-based index of first occurrence
        }
    }

    int ans = 0;

    // Calculate the result based on first occurrence of each character
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (mp.find(c) != mp.end()) // If character was found in the string
        {
            ans += (n - mp[c]); // Contribution of each character
        }
    }

    cout << ans << "\n";
}

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        solve();
    }
}



#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int>vec(26, 0);
    int cnt;
    
    // Storing the first occurrence of each character
    for (int i = 0; i < n; i++)
    {
        if (vec[s[i] - 'a'] == 0) 
        {
            vec[s[i] - 'a'] = i + 1; // Store the 1-based index of first occurrence
        }
    }

    int ans = 0;

    // Calculate the sum of positions for each character present in the string
    for (int i = 0; i < 26; i++) 
    {
        if (vec[i] != 0) 
        {
            ans += (n - vec[i] + 1); // Contribution of each character's first occurrence
        }
    }

    cout << ans << "\n";
}

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        solve();
    }
}
