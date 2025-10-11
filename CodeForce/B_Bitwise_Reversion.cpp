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
    int x, y, z;
    cin >> x >> y >> z;

    bool ok = true;

    for (int i = 0; i < 31; ++i)
    {
        int X = (x >> i) & 1;
        int Y = (y >> i) & 1;
        int Z = (z >> i) & 1;

        if (!(
                (X == 0 && Y == 0 && Z == 0) ||
                (X == 0 && Y == 1 && Z == 0) ||
                (X == 0 && Y == 0 && Z == 1) ||
                (X == 1 && Y == 0 && Z == 0) ||
                (X == 1 && Y == 1 && Z == 1)))
        {
            ok = false;
            break;
        }
    }
    if (ok)
        yes;
    else
        no;
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