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
    int n, k, a, b, ans = 0;
    cin >> n >> k >> a >> b;
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> major(k);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;

        if (i < k)
        {
            major[i] = v[i];
        }
    }
    if (k < 2)
    {
        ans = abs(v[a - 1].first - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second);
        cout << ans << endl;
        return;
    }
    int x = INFINITY;
    int y = INFINITY;
    pair<int, int> tmp;
    for (int i = 0; i < k; i++)
    {
        x = min(x, abs(v[a - 1].first - major[i].first) + abs(v[a - 1].second - major[i].second));
        y = min(y, abs(v[b - 1].first - major[i].first) + abs(v[b - 1].second - major[i].second));
    }
    cout << min(abs(v[a - 1].first - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second), x + y) << endl;
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