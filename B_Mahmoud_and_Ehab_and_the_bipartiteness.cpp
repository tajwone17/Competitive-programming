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
int visited[N];
vector<int> g[N];
void dfs(int v)
{
    // take action on vertex before entering the vertex
    if (visited[v] == -1)
        visited[v] = 1;

    for (int child : g[v])
    {
        if (visited[child] != -1)
            continue;
        // take action on child before entering the child node
        if (visited[v] == 1)
            visited[child] = 0;
        else if (visited[v] == 0)
            visited[child] = 1;

        dfs(child);
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
}
void solve()
{
    int n;
    cin >> n;
    memset(visited, -1, sizeof(visited));

    for (int i = 0; i < n - 1; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    dfs(1);
    int cnt1 = 0, cnt2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
            cnt1++;
        else if (visited[i] == 1)
            cnt2++;
    }

    cout << (cnt1 * cnt2) - (n - 1) << endl;
}

main()
{
    faster;
    solve();
}
