#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
const int N = 1e5 + 10;
const int M = 1e9 + 7;

vector<int> g[N];
bool visited[N];
bool fix[N];

long long mod(long long x)
{
    return ((x % M + M) % M);
}

long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

bool dfs(int v, bool &containsFixed)
{
    visited[v] = true;
    if (fix[v])
        containsFixed = true;

    for (int child : g[v])
    {
        if (!visited[child])
        {
            dfs(child, containsFixed);
        }
    }
    return true;
}

int solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

   
    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        visited[i] = false;
        fix[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (c[i] != 0)
        {
            fix[c[i]] = true;
        }
    }

 
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            g[a[i]].push_back(b[i]);
            g[b[i]].push_back(a[i]);
        }
    }

    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i] && !g[i].empty())
        {
            bool containsFixed = false;
            dfs(i, containsFixed);

            if (!containsFixed)
                cnt = mul(cnt, 2);
        }
    }

    return cnt;
}

main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}
