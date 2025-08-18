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
    vector<int> s(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    map<int, int> mp;
    if (k == 0)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            yes;
        else
            no;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int r = s[i] % k;
        int z = min(r, k - r);
        mp[z]++;
    }

    for (int i = 0; i < n; i++)
    {
        int rem = t[i] % k;
        int z = min(rem, k - rem);
        if (mp[z])
            mp[z]--;
        else
        {
            no;
            return;
        }
    }
    yes;
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