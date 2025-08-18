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
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    if (x == n || x == 1)
    {
        cout << 1 << endl;
        return;
    }
    x--;
    int idxLeft = -1, idxRight = n;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == '#')
            idxLeft = i;
    }
    for (int i = x + 1; i < n; i++)
    {
        if (s[i] == '#')
        {
            idxRight = i;
            break;
        }
    }
    int ans;
    if ((idxLeft + 1) > (n - idxRight))
    {
        ans = min(idxLeft + 1, n - 1 - x) + 1;
    }
    else
    {
        ans = min(x, n - idxRight) + 1;
    }
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