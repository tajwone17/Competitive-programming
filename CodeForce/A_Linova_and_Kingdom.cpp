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
const int N = 2e5 + 10;
bool visited[N];
vector<int> g[N];
vector<int> ans;
int dfs(int v, int curr)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
    int cnt = 0;
    for (int child : g[v])
    {
        if (visited[child])
            continue;
        // take action on child before entering the child node

        cnt += dfs(child, curr + 1);
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
    ans.push_back(curr - cnt);
    return cnt + 1;
}
void tajwone17()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int curr = 0;
    dfs(1, curr);
    sort(ans.rbegin(), ans.rend());
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}