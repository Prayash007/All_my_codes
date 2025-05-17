#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int countBuses(int N, vector<int>& passengers, vector<vector<int>>& edges) {
    vector<vector<int>> adj(N + 1);
    
    // Build adjacency list
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0], v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Step 1: BFS from node 1 to compute distances
    vector<int> distance(N + 1, -1);
    queue<int> q;
    q.push(1);
    distance[1] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        for (int j = 0; j < adj[current].size(); j++) {
            int neighbor = adj[current][j];
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);
            }
        }
    }

    // Step 2: Collect all passenger nodes with their distances
    vector<pair<int, int>> passengerNodes;
    for (int i = 1; i <= N; i++) {
        if (passengers[i - 1] == 1) {
            passengerNodes.push_back(make_pair(distance[i], i));
        }
    }

    // Step 3: Sort passengers by distance from node 1 (farthest first)
    sort(passengerNodes.rbegin(), passengerNodes.rend());

    // Step 4: Count buses required using a greedy approach
    vector<bool> visited(N + 1, false);
    int buses = 0;

    for (int i = 0; i < passengerNodes.size(); i++) {
        int dist = passengerNodes[i].first;
        int node = passengerNodes[i].second;

        if (visited[node]) continue; // Already covered by another bus

        // Start a new bus from this node
        buses++;
        int current = node;

        // Move towards node 1, marking path as visited
        while (current != 1 && !visited[current]) {
            visited[current] = true;
            for (int j = 0; j < adj[current].size(); j++) {
                int neighbor = adj[current][j];
                if (distance[neighbor] == distance[current] - 1) {
                    current = neighbor;
                    break;
                }
            }
        }
        visited[1] = true; // Ensure node 1 is marked as visited
    }

    return buses;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> passengers(N);
        for (int i = 0; i < N; i++) {
            cin >> passengers[i];
        }
        vector<vector<int>> edges(N - 1, vector<int>(2));
        for (int i = 0; i < N - 1; i++) {
            cin >> edges[i][0] >> edges[i][1];
        }
        cout << countBuses(N, passengers, edges) << endl;
    }
    return 0;
}
