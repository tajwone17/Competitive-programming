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
int n, k, z;
vector<int> a;
vector<vector<int>> dp;

int fun(int i, int moves, int leftUsed)
{
    if (moves == k)
        return a[i];
    if (dp[i][leftUsed] != -1)
        return dp[i][leftUsed];

    int res = 0;
    if (i + 1 < n)
        res = max(res, a[i] + fun(i + 1, moves + 1, leftUsed));
    if (i > 0 && leftUsed < z)
        res = max(res, a[i] + fun(i - 1, moves + 1, leftUsed + 1));

    return dp[i][leftUsed] = res;
}

void tajwone17()
{
    cin >> n >> k >> z;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    dp.assign(k + 2, vector<int>(z + 2, -1));
    cout << fun(0, 0, 0) << endl;
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