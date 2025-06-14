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
// int mod(long long x){A
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
    vector<int> v(n);

    int y = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        y += v[i];
    }
    int cnt = 0;
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        sum += v[i];

        ans = max(sum, ans);
        if (sum < 0)
        {

            sum = 0;
        }
    }

    if (ans > y)
    {
        no;
        return;
    }
    sum = 0;
    for (int i = n - 1; i > 0; i--)
    {
        sum += v[i];
        ans = max(sum, ans);
        if (sum < 0)
            sum = 0;
    }
    if (ans >= y)
    {
        no;
        return;
    }
    yes;
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