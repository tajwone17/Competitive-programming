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
// bool visited[N];
unordered_map<int, bool> visited;
unordered_map<int, vector<int>> g;
// vector<int> g[N];
void dfs(int v)
{
    cout << v << " ";

    visited[v] = true;
    for (int child : g[v])
    {
        if (visited[child])
        {
            continue;
        }
        dfs(child);
    }
}
void solve()
{
    int n, start = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;

        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    for (const auto &pair : g)
    {
        int node = pair.first;
        const vector<int> &children = pair.second;

        if (children.size() == 1)
        {
            start = node;
            break;
        }

        if (start != -1)
        {
            break;
        }
    }
    dfs(start);
}

main()
{
    faster;

    // cin.ignore();

    solve();
}