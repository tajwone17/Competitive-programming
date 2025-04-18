#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)
#define sort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).rbegin(), (v).rend())
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
void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    all(n) cin >> a[i];
    all(n) cin >> b[i];
    int cnt = 1, mx = 0;
    int j = 0;
    vector<int> aa((2 * n) + 1, 0), bb((2 * n) + 1, 0);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else if (cnt != 0)
        {
            aa[a[i - 1]] = max(aa[a[i - 1]], cnt);
            cnt = 1;
        }
    }

    aa[a[n - 1]] = max(aa[a[n - 1]], cnt);
    cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            cnt++;
        }
        else if (cnt != 0)
        {
            bb[b[i - 1]] = max(bb[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    bb[b[n - 1]] = max(bb[b[n - 1]], cnt);

    for (int i = 1; i <= 2 * n; i++)
    {
        mx = max(mx, aa[i] + bb[i]);
    }
    cout << mx << endl;
}

main()
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