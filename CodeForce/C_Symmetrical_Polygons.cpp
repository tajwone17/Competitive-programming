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

    map<int, int> cnt;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }

    int ans = 0;
    bool ok = false;
    vector<int> rem;
    for (auto it : cnt)
    {
        if (it.second >= 2)
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << 0 << endl;
        return;
    }
    for (auto it : cnt)
    {
        int len = it.first;
        int count = it.second;
        int num_prs = count / 2;

        ans += 2 * num_prs * len;

        if (count % 2 != 0)
        {
            rem.push_back(len);
        }
    }

    int maxi = ans;
    sort(rem.rbegin(), rem.rend());
    for (int i = 0; i < rem.size(); i++)
    {
        if (rem[i] < ans)
        {
            maxi = max(maxi, ans + rem[i]);
            break;
        }
    }

    for (int i = 1; i < rem.size(); i++)
    {
        if (rem[i - 1] - rem[i] < ans)
        {
            maxi = max(maxi, ans + rem[i] + rem[i - 1]);

            break;
        }
    }
    if (maxi == ans && rem.size() == n - 2)
        cout << 0 << endl;
    else
        cout << maxi << endl;
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