#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define technologia return 0

// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(int x){
//     return ((x%M + M)%M);
// }
// int add(int a, int b){
//     return mod(mod(a)+mod(b));
// }
// int mul(int a, int b){
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

    vector<pair<int, int>> r(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> r[i].first >> r[i].second;
    }

    int ans = 0;
    int ct = 0;
    int cs = 0;

    for (int i = 0; i < n; ++i)
    {
        int nt = r[i].first;
        int ns = r[i].second;

        int time = nt - ct;

        if ((cs + time) % 2 == ns)
        {

            ans += time;
        }
        else
        {

            ans += (time - 1);
        }

        ct = nt;
        cs = ns;
    }

    ans += (m - ct);

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
    technologia;
}