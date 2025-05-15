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
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        sum += a[n - 1] - a[i];
    }
    if (sum == x)
    {
        cout << a[n - 1] << endl;
        return;
    }
    if (sum > x)
    {
        int l = 0, r = a[n - 1] + x;
        int mid = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {

                if (a[i] < mid)
                    sum += mid - a[i];
            }

            if (sum <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    else if (sum < x)
    {
        int j = x - sum;
        int ans = j / n;
        cout << ans + a[n - 1] << endl;
    }
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