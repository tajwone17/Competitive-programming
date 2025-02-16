#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
map<int, int> mp;
int ans = 0;

void dfs(int v, int cnt, int m)
{
    visited[v] = true;

    if (mp[v] == 1)
    {
        cnt++;
    }
    else
    {
        cnt = 0;
    }

    if (cnt > m)
        return;

    bool isLeaf = true;
    for (int child : g[v])
    {
        if (!visited[child])
        {
            isLeaf = false;
            dfs(child, cnt, m);
        }
    }

    if (isLeaf)
        ans++;
}

main()
{
    faster;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[i] = x;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }

    dfs(1, 0, m);
    cout << ans << endl;
}
