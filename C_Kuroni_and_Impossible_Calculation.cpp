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
int mod(long long x, long long m)
{
    return ((x % m + m) % m);
}
// int add(long long a, long long b, long long m)
// {
//     return mod(mod(a, m) + mod(b, m), m);
// }
int mul(long long a, long long b, long long m)
{
    return mod(mod(a, m) * mod(b, m), m);
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 1;
    if (n > m)
    {
        cout << 0;
        return ;
    }
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = mul(sum, abs(a[i] - a[j]), m);
        }
    }
    cout << sum << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}