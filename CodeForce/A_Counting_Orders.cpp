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

const int M = 1e9 + 7;
int mod(long long x)
{
    return ((x % M + M) % M);
}
// int add(long long a, long long b){
//     return mod(mod(a)+mod(b));
// }
int mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}
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
    int n, ans = 1;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < n; i++)
    {
        int tmp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        // int l = 0, r = n - 1;
        // int tmp = n;
        // while (l <= r)
        // {
        //     int mid = (l + r) / 2;
        //     if (a[mid] > b[i])
        //     {
        //         tmp = mid;
        //         r = mid - 1;
        //     }
        //     else
        //     {
        //         l = mid + 1;
        //     }
        // }
        int count = a.size() - tmp;
        ans = mul(ans, max(0ll, count - i));
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
}