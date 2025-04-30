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
    int n, cnta = 0, cntb = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        if (s[0] == 'A')
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cnta++;
        else
            cntb++;
    }
    if (cnta == n - 1)
    {
        cout << "Alice" << endl;
        return;
    }
    if (cntb == n - 1)
    {
        cout << "Bob" << endl;
        return;
    }
    if (s[n - 1] == 'A' and (s[0] == 'A' or s[n - 2] == 'A'))
    {
        cout << "Alice" << endl;
        return;
    }
    {
        cout << "Bob" << endl;
        return;
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