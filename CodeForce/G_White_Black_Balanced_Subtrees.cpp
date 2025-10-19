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
const int N = 4005;
int ans;
bool visited[N];
vector<int> g[N];
pair<int, int> dfs(int v, string &s)
{

    int black = (s[v - 1] == 'B');
    int white = (s[v - 1] == 'W');

    for (int child : g[v])
    {
        auto [cw, cb] = dfs(child, s);
        black += cb;
        white += cw;
    }
    if (black == white)
        ans++;
    return {white, black};
}
void tajwone17()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        g[i].clear();

    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        g[p].push_back(i);
    }

    string s;
    cin >> s;

    ans = 0;
    dfs(1, s);

    cout << ans << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17();
    }
    technologia;
}