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
bool isGood(int n)
{
    if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
        return true;
    return false;
}
void tajwone17()
{
    int l, r;
    cin >> l >> r;
    int ans = r - l + 1;
    int c1 = (r / 2) - (l - 1) / 2 +
             (r / 3) - (l - 1) / 3 +
             (r / 5) - (l - 1) / 5 +
             (r / 7) - (l - 1) / 7;
    // 2 3
    c1 = c1 - ((r / 6) - ((l - 1) / 6));
    // 2 5
    c1 = c1 - ((r / 10) - ((l - 1) / 10));
    // 2 7
    c1 = c1 - ((r / 14) - ((l - 1) / 14));
    // 3 5
    c1 = c1 - ((r / 15) - ((l - 1) / 15));
    // 3 7
    c1 = c1 - ((r / 21) - ((l - 1) / 21));
    // 5 7
    c1 = c1 - ((r / 35) - ((l - 1) / 35));

    // 2 3 5
    c1 = c1 + ((r / 30) - ((l - 1) / 30));
    // 2 3 7
    c1 = c1 + ((r / 42) - ((l - 1) / 42));
    // 2 5 7
    c1 = c1 + ((r / 70) - ((l - 1) / 70));
    // 3 5 7
    c1 = c1 + ((r / 105) - ((l - 1) / 105));

    // 2 3 5 7
    c1 = c1 - ((r / 210) - ((l - 1) / 210));

    cout << ans - c1 << endl;
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