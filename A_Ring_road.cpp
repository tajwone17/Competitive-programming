#include <bits/stdc++.h>
using namespace std;

#define int long long
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 105;
vector<pair<int, int>> adj[N];  // Graph adjacency list
bool visited[N];  // Visited array for DFS
int forwardCost = 0;  // Cost of moving in the given direction

// DFS Function to Calculate Forward Cost
void dfs(int node, int parent) {
    visited[node] = true;

    for (auto [neighbor, cost] : adj[node]) {
        if (!visited[neighbor]) {
            forwardCost += cost; // Add cost if moving forward
            dfs(neighbor, node);
        }
    }
}

int32_t main() {
    faster;

    int n;
    cin >> n;

    int totalCost = 0;  // Sum of all edges in the cycle

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c}); // Directed edge
        adj[b].push_back({a, 0}); // Placeholder for tracking reverse traversal
        totalCost += c;
    }

    // Run DFS from node 1 to calculate forward cost
    memset(visited, false, sizeof(visited));
    dfs(1, -1);

    // Reverse cost = Total Cost - Forward Cost
    int reverseCost = totalCost - forwardCost;

    // Minimum cost to make the graph strongly connected
    cout << min(forwardCost, reverseCost) << endl;

    return 0;
}
