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
void tajwone17(vector<pair<int, int>> &deals)
{
    int n, step;
    cin >> n >> step;
    int remaining = n;
    int coin = 0;
    int k = step;
    bool isPossible = true;
    for (int i = deals.size() - 1; i >= 0; i--)
    {
        int cnt = remaining / deals[i].first;
        if (cnt > 0)
        {
            coin += cnt * deals[i].second;
            remaining -= cnt * deals[i].first;
            k -= cnt;
        }

        if (k <= 0 && remaining > 0 || k < 0)
        {
            isPossible = false;
        }
    }
    remaining = n;
    k = step;
    int coin1 = 0;
    for (int i = 0; i < deals.size(); i++)
    {
        int cnt = remaining / deals[i].first;
        if (cnt > 0)
        {
            coin1 += cnt * deals[i].second;
            remaining -= cnt * deals[i].first;
            k -= cnt;

            if (!isPossible && k < 0)
            {

                cout << -1 << endl;
                return;
            }
        }
    }

    cout << min(coin, coin1) << endl;
}

int32_t main()
{
    freePalestine;

    vector<pair<int, int>> deals;
    for (int x = 0;; x++)
    {
        int wm = pow(3, x);
        if (wm > 1e9)
            break;
        int cost = pow(3, x + 1) + x * pow(3, x - 1);
        deals.push_back({wm, cost});
    }

    int t;
    cin >> t;
    while (t--)
    {
        tajwone17(deals);
    }

    technologia;
}
