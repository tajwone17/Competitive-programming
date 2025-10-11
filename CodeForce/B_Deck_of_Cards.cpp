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
void tajwone17()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << '-';
        }
        cout << endl;
        return;
    }
    int cntTop = 0, cntBottom = 0, cntBoth = 0;
    for (char c : s)
    {
        if (c == '0')
            cntTop++;
        else if (c == '1')
            cntBottom++;
        else
            cntBoth++;
    }

    string result(n, '+');

    for (int i = 0; i < cntTop; i++)
        result[i] = '-';

    for (int i = 0; i < cntBottom; i++)
        result[n - 1 - i] = '-';

    int left = cntTop;
    int right = n - cntBottom - 1;
    while (left <= right && cntBoth > 0)
    {
        result[left++] = '?';
        result[right--] = '?';
        cntBoth--;
    }
    cout << result << "\n";
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