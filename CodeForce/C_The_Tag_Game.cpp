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
const int N = 2e5 + 10;

vector<int> g[N];
int distBob[N];
int distAlice[N];

void dfsDistance(int v, int parent, int depth, int dis[])
{
    dis[v] = depth;

    for (int child : g[v])
    {
        if (child == parent)
            continue;
        dfsDistance(child, v, depth + 1, dis);
    }
}

void solve()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    memset(distBob, -1, sizeof(distBob));
    memset(distAlice, -1, sizeof(distAlice));

    dfsDistance(1, -1, 0, distAlice);
    dfsDistance(x, -1, 0, distBob);

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (distAlice[i] > distBob[i])
        {
            ans = max(ans, distAlice[i]);
        }
    }

    cout << ans * 2 << endl;
}

main()
{
    faster;
    solve();
}
