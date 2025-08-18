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

    vector<int> idx;
    vector<int> val;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < i + 1)
        {
            idx.push_back(i + 1);
            val.push_back(a[i]);
        }
    }
    sort(idx.begin(), idx.end());
    int ans = 0;
    sort(val.begin(), val.end());
    for (int i = 0; i < idx.size(); i++)
    {
        if (val.empty() || val.back() <= idx[i])
        {
            continue;
        }
        int l = 0, r = val.size() - 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (val[mid] > idx[i])
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (val[r] > idx[i])
        {
            ans += (val.size() - r);
        }
    }
    cout << ans << endl;
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