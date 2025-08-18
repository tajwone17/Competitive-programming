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
int calc(int value)
{
    int operationCount = 0;
    while (value > 1)
    {
        value = (value + 1) / 2;
        operationCount++;
    }
    return operationCount;
}

void tajwone17()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int row_dist = 1 + min(a - 1, n - a);
    int ans1 = calc(row_dist) + calc(m);

    int col_dist = 1 + min(b - 1, m - b);
    int ans2 = calc(col_dist) + calc(n);

    int ans = min(ans1, ans2);

    cout << ans + 1 << endl;
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
}