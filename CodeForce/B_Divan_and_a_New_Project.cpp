#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)

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
    vector<int> v(n);
    vector<int> ans(n + 1, 0);
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        times[i].first = 2 * v[i];
        times[i].second = i;
    }
    sort(times.rbegin(), times.rend());
    vector<int> number(n + 1);
    int x = 0, y = 0, sum = 0;
    number[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 0)
        {
            number[i] = ++x;
        }
        else
            number[i] = --y;
    }
    for (int i = 0; i < times.size(); i++)
    {

        sum += times[i].first * abs(number[i + 1]);
    }
    cout << sum << endl;
    ans[0] = 0;
    for (int i = 0; i < times.size(); i++)
    {

        ans[times[i].second + 1] = number[i + 1];
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
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
}