#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

const int N = 1e5 + 10;

vector<pair<int, int>> g[N];
int ans = 0, cost = 0;

void dfs(int v, int parent = -1)
{

    for (const pair<int, int> &edge : g[v])
    {
        int neighbor = edge.first;
        int weight = edge.second;

        if (neighbor == parent)
        {
            ans = max(ans, cost);
            continue;
        }

        cost += weight;
        dfs(neighbor, v);
        cost -= weight;
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int n1, n2, c;
        cin >> n1 >> n2 >> c;
        g[n1].push_back({n2, c});
        g[n2].push_back({n1, c});
    }

    dfs(0);

    cout << ans << endl;
}

int32_t main()
{
    faster;
    solve();
}
