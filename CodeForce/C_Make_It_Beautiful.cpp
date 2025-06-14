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
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(long long x){A
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
    int n, op;
    cin >> n >> op;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans += __builtin_popcountll(v[i]);
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> lesser;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while ((1ll << j) & v[i])
        {
            j++;
        }
        lesser.push({1ll << j, i});
    }

    while (op > 0)
    {
        int k = lesser.top().first;
        int idx = lesser.top().second;
        lesser.pop();
        if (op >= k)
        {
            v[idx] += k;

            ans++;
            int j = 0;
            while ((1ll << j) & v[idx])
            {
                j++;
            }
            lesser.push({1ll << j, idx});

            op -= k;
        }
        else
            break;
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
}