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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int ans = 0;
    map<int, int> mp1;
    vector<int> c(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[mp1[b[i]]] = i + 1;
    }
    int mx = c[1];
    for (int i = 1; i <= n; i++)
    {
        if (c[i] < mx)
        {
            ans++;
        }
        mx = max(mx, c[i]);
    }

    cout << ans << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}