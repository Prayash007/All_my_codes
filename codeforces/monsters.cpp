#include <bits/stdc++.h>
using namespace std;
struct MonsterComparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        // If health is the same, compare by index (lesser index first)
        if (a.first == b.first) {
            return a.second > b.second; // Lesser index should come first
        }
        return a.first < b.first; // Max-heap behavior for health
    }
};
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, MonsterComparator> pq;
    for (int i = 0; i < n; i++) {
        pq.push({vec[i], i});
    }

    vector<int> order;

    while (!pq.empty()) {
        int m = pq.top().first;
        int g = pq.top().second;
        pq.pop();

        if (m <= 0) {
            continue; 
        }

        m -= k; 

        if (m <= 0) {
            order.push_back(g + 1); 
        } else {
            pq.push({m, g});
        }
    }

    for (auto i : order) {
        cout << i << " ";
    }
    cout << '\n';
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
