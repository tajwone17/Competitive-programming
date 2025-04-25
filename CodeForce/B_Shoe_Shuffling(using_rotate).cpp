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
    int n;
    cin >> n;
    vector<int> p(n);
    int flag = 0, flagEven = 0;
    vector<int> ans(n, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        mp[p[i]]++;
        ans[i] = i + 1;
    }
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    int l = 0, r = 0;
    while (r < n)
    {
        if (p[l] == p[r])
            r++;
        else
        {
            rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
            l = r;
        }
    }
    rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

main()
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