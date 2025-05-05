#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
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
vector<int> vt;
void dfs(int v, int par)
{
    // take action on vertex before entering the vertex
    visited[v] = true;

    for (int child : g[v])
    {

        if (visited[child])
            continue;
        // take action on child before entering the child node

        dfs(child, v);
        vt[v] += vt[child];
    }
    // take action on vertex before exiting the vertex
}

void compilerKande()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     vt.push_back(0);
    // }

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vt.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    int q;
    cin >> q;
    dfs(1, -1);
    while (q--)
    {
        int x;
        cin >> x;
        cout << vt[x] << endl;
    }
}

int32_t main()
{
    freePalestine;

    compilerKande();
}