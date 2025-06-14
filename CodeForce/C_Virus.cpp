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
    int n, m;
    cin >> n >> m;
    vector<int> Infected(m);

    for (int i = 0; i < m; i++)
    {
        cin >> Infected[i];
    }
    sort(Infected.begin(), Infected.end());
    vector<int> segments;
    for (int i = 0; i < m - 1; i++)
    {
        segments.push_back(max(0ll, Infected[i + 1] - Infected[i] - 1));
    }
    segments.push_back(n - Infected[m - 1] + Infected[0] - 1);
    sort(segments.rbegin(), segments.rend());
    int j = 0;
    int ans = 0;
    for (int i = 0; i < segments.size(); i++)
    {
        int crnt = segments[i] - j * 2;
        if (crnt > 0)
            ans++;
        crnt -= 2;
        if (crnt > 0)
            ans += crnt;

        j += 2;
    }
    cout << n - ans << endl;
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