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
void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 1, r = n - 1;
    vector<int> ans(n, 0);
    ans[0] = 1;
    ans[n - 1] = 1;
    int mn = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (mn > a[i + 1])
        {
            ans[i + 1] = 1;
            mn = a[i + 1];
        }
    }
    int mx = a[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {
        if (mx < a[i - 1])
        {
            ans[i - 1] = 1;
            mx = a[i - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << endl;
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