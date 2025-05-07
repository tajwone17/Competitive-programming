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
const int N = 3 * 1e5 + 10;

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
void tajwone17(vector<int> &pre)
{

    int a, b;
    cin >> a >> b;
    int xr = pre[a - 1];
    if (xr == b)
        cout << a << endl;
    else if (xr != b && (xr ^ b) != a)
    {
        cout << a + 1 << endl;
    }
    else
        cout << a + 2 << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    vector<int> pre(N, 0);

    for (int i = 1; i <= N; i++)
    {
        pre[i] = pre[i - 1] ^ i;
    }
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17(pre);
    }
}