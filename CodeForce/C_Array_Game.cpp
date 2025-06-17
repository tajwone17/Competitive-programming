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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k > 2)
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());

    if (k == 1)
    {
        int ans = a[0];
        for (int i = 0; i < a.size() - 1; i++)
        {
            ans = min(ans, abs(a[i] - a[i + 1]));
        }

        cout << ans << endl;
        return;
    }

    int ans = a[0];
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int val = abs(a[i] - a[j]);
            ans = min(ans, val);
            int h = n - 1, l = 0, mid;
            int idx = -1;
            while (l <= h)
            {
                mid = l + (h - l) / 2;
                if (a[mid] >= val)
                {
                    idx = mid;
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (idx == -1)
            {
                ans = min(ans, abs(val - a[n - 1]));
            }
            else
                ans = min(ans, abs(val - a[idx]));

            if (idx == 0)
            {
                ans = min(ans, abs(val - a[0]));
            }
            else
            {
                ans = min(ans, abs(val - a[idx - 1]));
            }
        }
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