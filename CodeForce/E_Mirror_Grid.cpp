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
    vector<vector<char>> v(n + 1, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int c0 = 0, c1 = 0;
            if (v[i][j] == '0')
                c0++;
            else
                c1++;
            if (v[j][n - i - 1] == '0')
                c0++;
            else
                c1++;
            if (v[n - i - 1][n - j - 1] == '0')
                c0++;
            else
                c1++;
            if (v[n - j - 1][i] == '0')
                c0++;
            else
                c1++;
            if (c0 > c1)
            {
                ans += c1;
                v[i][j] = '0';
                v[j][n - i - 1] = '0';
                v[n - i - 1][n - j - 1] = '0';
                v[n - j - 1][i] = '0';
            }
            else
            {
                ans += c0;
                v[i][j] = '1';
                v[j][n - i - 1] = '1';
                v[n - i - 1][n - j - 1] = '1';
                v[n - j - 1][i] = '1';
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