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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool isEqual = true;
    bool allMinus = true;
    sort(a.begin(), a.end());
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            allMinus = false;
            idx = i;
            break;
        }
    }
    for (int i = idx; i < n; i++)
    {
        if (a[i] == 0)
        {
            no;
            return;
        }
    }
    for (int i = idx; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            isEqual = false;
        }
    }
    if (allMinus || isEqual)
    {
        yes;
        return;
    }
    no;
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