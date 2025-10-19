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
const int MOD = 1000000007;
int sol(int n, int k, vector<vector<int>> &factors, vector<vector<int>> &dp, int i, int j)
{
    if (i == 1)
        dp[i][j] = 1;
    if (dp[i][j] != 0)
        return dp[i][j];

    int res = 0;
    for (int factor : factors[j])
    {
        res = (res + sol(n, k, factors, dp, i - 1, factor)) % MOD;
    }
    dp[i][j] = res;
    return dp[i][j];
}
void tajwone17()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> factors(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                factors[i].push_back(j);
                if (j != i / j)
                    factors[i].push_back(i / j);
            }
        }
    }
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans + sol(n, k, factors, dp, k, i)) % MOD;
    }
    cout << ans << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}