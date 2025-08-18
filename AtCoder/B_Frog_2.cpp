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
int frog(vector<int> &v, int i, vector<int> &dp, int k)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;

    for (int j = 1; j <= k; j++)
    {
        if (i - j >= 0)
            cost = min(cost, frog(v, i - j, dp, k) + abs(v[i] - v[i - j]));
    }
    return dp[i] = cost;
}
void tajwone17()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> dp(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << frog(v, n - 1, dp, k) << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}