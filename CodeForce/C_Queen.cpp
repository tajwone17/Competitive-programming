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
const int N = 1e5 + 10;

vector<int> g[N];
vector<int> c(N);
vector<int> ans;
void dfs(int v)
{
    int flag = 0;
    // take action on vertex before entering the vertex
    if (c[v] == 0)
    {
        flag = 1;
    }

    for (auto child : g[v])
    {

        // take action on child before entering the child node

        dfs(child);
        if (c[child] == 0)
            flag = 1;

        // take action on child after exiting the child node
    }
    if (!flag)
    {
        ans.push_back(v);
    }

    // take action on vertex before exiting the vertex
}
void tajwone17()
{
    int n;
    cin >> n;
    int root = -1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        c[i + 1] = y;

        if (x == -1)
        {
            root = i + 1;
        }
        else
            g[x].push_back(i + 1);
    }
    dfs(root);
    if (ans.empty())
    {
        cout << -1 << endl;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto u : ans)
    {
        cout << u << " ";
    }
    cout << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}