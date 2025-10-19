#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define technologia return 0

// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(long long x){
//     return ((x%M + M)%M);
// }
// int add(long long a, long long b){
//     return mod(mod(a)+mod(b));
// }
// int mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
// int mod_pow(int base, int exp) {
//     int res = 1;
//     while (exp > 0) {
//         if (exp & 1)
//             res = (res * base) % M;
//         base = (base * base) % M;
//         exp >>= 1;
//     }
//     return res;
// }
const int N = 200005;
vector<pair<int, int>> g[N + 1];
bool visited[N];
vector<int> result[N];
int color[N];
void dfs(int v, int par, int parentColor)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
    int currColor = 1;
    for (auto &q : g[v])
    {
        int child = q.first;
        int roadNumber = q.second;
        if (child == par)
            continue;
        if (currColor == parentColor)
            currColor++;
        color[roadNumber] = currColor;

        // take action on child before entering the child node

        dfs(child, v, currColor);
        // take action on child after exiting the child node
        currColor++;
    }
    // take action on vertex before exiting the vertex
}
void tajwone17()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back({v, i + 1});
        g[v].push_back({u, i + 1});
    }
    dfs(1, -1, 0);
    for (int i = 1; i < n; i++)
    {
        result[color[i]].push_back(i);
    }
    int days = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!result[i].empty())
        {
            days++;
        }
    }

    cout << days << endl;
    for (int i = 0; i < days; i++)
    {
        cout << result[i + 1].size();
        for (auto &it : result[i + 1])
        {
            cout << " " << it;
        }
        cout << endl;
    }
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}