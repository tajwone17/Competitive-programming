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
const int N = 2e5 + 10;
vector<int> g[N];
vector<int> color(N, -1);
vector<bool> visited(N, false);
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
bool dfs(int v, int par, int currColor)
{
    visited[v] = true;
    color[v] = currColor;

    for (auto child : g[v])
    {
        if (visited[child])
        {
            if (color[child] == currColor)
                return false;
            continue;
        }

        if (!dfs(child, v, !currColor))
            return false;
    }
    return true;
}
void tajwone17()
{
    int v, e;
    cin >> v >> e;
    vector<int> inout(e);
    for (int i = 0; i < e; i++)
    {
        int u, vv;
        cin >> u >> vv;
        g[u].push_back(vv);
        g[vv].push_back(u);
        inout[i] = u;
    }
    if (dfs(1, 0, 1))
    {
        yes;
        for (int j = 0; j < e; j++)
        {
            cout << color[inout[j]];
        }
        cout << endl;
    }
    else
    {
        no;
    }
}

int32_t main()
{
    freePalestine;

    // cin.ignore();

    tajwone17();

    technologia;
}