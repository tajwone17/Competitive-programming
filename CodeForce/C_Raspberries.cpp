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
    int n, p = 1, flag1 = 0;
    ;
    int k;

    cin >> n;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = LONG_MAX;
    if (k == 2 || k == 3 || k == 5)
    {
        for (int i = 0; i < n; i++)
        {
            int z = a[i] % k;
            if (z == 0)
            {
                cout << 0 << endl;
                return;
            }
            ans = min(ans, k - z);
        }
        cout << ans << endl;
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                cnt++;
            int z = a[i] % k;
            if (z == 0)
            {
                cout << 0 << endl;
                return;
            }
            ans = min(ans, k - z);
        }
        int m = 0;
        if (n >= 2 && cnt < 2)
            m = max((long long)0, 2 - cnt);

        if (cnt > 2)
        {
            cout << 0 << endl;
            return;
        }

        cout << min(m, ans) << endl;
        return;
    }
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