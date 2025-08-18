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
void tajwone17()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    int x = sx + d;
    int y = sx - d;
    int w = sy + d;
    int z = sy - d;
    bool topBottom = (x >= n && y <= 1);
    bool leftRight = (w >= m && z <= 1);
    bool leftTop = (z <= 1 && y <= 1);
    // bool rightTop = (w >= m && y <= 1);
    bool rightBottom = (x >= n && w >= m);

    if (topBottom || leftRight || leftTop || rightBottom)
    {
        cout << -1 << endl;
        return;
    }

    cout << n + m - 2 << endl;
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