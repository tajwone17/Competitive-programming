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
    int n, m;
    cin >> n >> m;
    vector<int> a(n * m);
    bool isNeg = false;
    for (int i = 0; i < n * m; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            isNeg = true;
    }
    sort(a.begin(), a.end());
    int mn = a[0];
    int len = n * m;
    int secondMn = a[1];
    int mx = a[len - 1];
    int secondMx = a[len - 2];
    int ans = 0;
    if (isNeg)
    {
        int cnt = len - 1 - (n - 1);
        ans += (mn - mx) * cnt;
        ans += (mn - secondMx) * (n - 1);
        int ans1 = 0;
        int cnt1 = len - 1 - (m - 1);
        ans1 += (mn - mx) * cnt1;
        ans1 += (mn - secondMx) * (m - 1);
        ans = max(abs(ans), abs(ans1));
    }
    else
    {
        int cnt = len - 1 - (n - 1);
        ans += (mx - mn) * cnt;
        ans += (mx - secondMn) * (n - 1);
        int ans1 = 0;
        int cnt1 = len - 1 - (m - 1);
        ans1 += (mx - mn) * cnt1;
        ans1 += (mx - secondMn) * (m - 1);
        ans = max(abs(ans), abs(ans1));
    }
    cout << abs(ans) << endl;
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