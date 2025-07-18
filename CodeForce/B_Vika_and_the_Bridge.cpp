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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> last(x + 1, 0);
    vector<int> max1(x + 1, 0);
    vector<int> max2(x + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int step = i - last[a[i]] - 1;
        if (step > max1[a[i]])
        {
            max2[a[i]] = max1[a[i]];
            max1[a[i]] = step;
        }
        else if (step > max2[a[i]])
        {
            max2[a[i]] = step;
        }
        last[a[i]] = i;
    }
    for (int i = 1; i <= x; ++i)
    {
        int step = n - last[i];
        if (step > max1[i])
        {
            max2[i] = max1[i];
            max1[i] = step;
        }
        else if (step > max2[i])
        {
            max2[i] = step;
        }
    }
    int val = LONG_MAX;
    for (int i = 1; i <= x; i++)
    {
        val = min(val, max(max1[i] / 2, max2[i]));
    }
    cout << val << endl;
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