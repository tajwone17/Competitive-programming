#include <bits/stdc++.h>
using namespace std;

#define int long long
#define faster               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int N = 1e5 + 10;
bool visited[N];
vector<pair<int, int>> adj[N];
vector<pair<int, int>> rev[N];

void dfs(int v, int &totalCost, int par)
{

    visited[v] = true;

    for (auto child : adj[v])
    {
        if (!visited[child.first])
        {
            totalCost += child.second;
            dfs(child.first, totalCost, v);
        }
        else if (child.first == 1 && par != 1)
        {
            totalCost += child.second;
        }
    }
}
void solve()
{
    int n, total = 0;
    cin >> n;
    set<int> st;
    set<int> st1;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, 0});

        total += c;
    }
    int totalCost = 0;

    dfs(1, totalCost, -1);

    int to = (total - totalCost);
    cout << min(to, totalCost) << endl;
}
int32_t main()
{
    faster;

    solve();
}
