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
    int n, s;
    cin >> n >> s;
    int sum = 0;
    vector<int> v(n);
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }
    pref[0] = 0;
    pref[1] = v[0];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    int ans = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        int l = i;
        int r = n - 1;
        int pos = -1;
        while (l <= r)
        {
            int mid = l + r >> 1;
            if (pref[mid + 1] - pref[i] <= s)
            {
                pos = mid;
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }
        if (pos != -1 && pref[pos + 1] - pref[i] == s)
        {
            ans = min(ans, n - (pos - i + 1));
        }
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
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