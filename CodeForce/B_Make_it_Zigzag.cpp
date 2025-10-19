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
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> pm(n);
    int pref = LLONG_MIN;
    for (int i = 0; i < n; ++i)
    {
        pref = max(pref, a[i]);
        pm[i] = pref;
    }
    for (int i = 1; i < n; i += 2)
        a[i] = pm[i];
    int cost = 0;
    for (int i = 0; i < n; i += 2)
    {
        int limit = INT_MAX;
        if (i > 0)
            limit = min(limit, a[i - 1]);
        if (i + 1 < n)
            limit = min(limit, a[i + 1]);
        if (limit == INT_MAX)
            continue;
        if (a[i] - limit + 1 > 0)
            cost += (a[i] - limit + 1);
    }
    cout << cost << endl;
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