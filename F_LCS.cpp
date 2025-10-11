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
string s1, s2;
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    int ans = lcs(i - 1, j);
    ans = max(ans, lcs(i, j - 1));
    ans = max(ans, lcs(i - 1, j - 1) + (s1[i] == s2[j]));
    return ans;
}
void tajwone17()
{

    cin >> s1 >> s2;
    cout << lcs(s1.size() - 1, s2.size() - 1) << endl;
}

int32_t main()
{
    freePalestine;

    // cout<<"Case #"<<i<<": ";
    tajwone17();

    technologia;
}