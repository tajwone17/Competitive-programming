#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)
#define sort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).rbegin(), (v).rend())
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
const int N = 1e5 + 10;
bool visited[N];
vector<int> g[N];
void dfs(int v)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
    // cout << v << endl;

    for (int child : g[v])
    {
        if (visited[child])
            continue;
        // take action on child before entering the child node

        dfs(child);
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
}
void solve()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> road;
    for (int i = 0; i < m; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }

    for (int i = 1; i <= n; i++)
    {

        if (visited[i])
            continue;

        dfs(i);
        road.push_back(i);
        cnt++;
    }
    cout << cnt - 1 << endl;
    for (int i = 0; i < road.size() - 1; ++i)
    {
        cout << road[i] << " " << road[i + 1] << endl;
    }
}

main()
{
    faster;

    solve();
}
