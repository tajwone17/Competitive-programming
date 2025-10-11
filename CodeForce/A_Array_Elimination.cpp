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
    int n, gcd = 0;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < 31; j++)
        {
            if (x & 1)
            {
                mp[j]++;
            }
            x = (x >> 1);
        }
    }
    bool flag = false;
    for (auto it : mp)
    {
        flag = true;
        if (gcd == 0)
            gcd = it.second;
        else
            gcd = __gcd(gcd, it.second);
    }
    if (!flag)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<int> res;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            res.push_back(i);
            if (i != gcd / i)
                res.push_back(gcd / i);
        }
    }
    sort(res.begin(), res.end());
    for (auto x : res)
        cout << x << " ";
    cout << endl;
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