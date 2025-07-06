
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
    int n;
    int k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ones = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            ones++;
        }
    }

    if (ones <= k)
    {
        cout << "Alice" << endl;
        return;
    }

    bool has_k_zeros = false;
    int consZero = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            consZero++;
        }
        else
        {
            consZero = 0;
        }
        if (consZero >= k)
        {
            has_k_zeros = true;
            break;
        }
    }

    if (has_k_zeros || (2 * k <= n))
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
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