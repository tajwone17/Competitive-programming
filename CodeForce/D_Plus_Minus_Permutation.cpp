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
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
void tajwone17()
{
    int n, x, y;
    cin >> n >> x >> y;
    set<int> st;
    int lc = lcm(x, y);
    int common_multiple = n / lc;
    int first = (n / x) - common_multiple;
    int last = (n / y) - common_multiple;

    int firstSum = 0, lastSum = 0;
    lastSum = (last * (last + 1)) / 2;
   firstSum = (first * (2 * n - (first - 1))) / 2;

    cout << firstSum - lastSum << endl;
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