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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i].first > k && a[i].first % k != 0)
        {
            int z =a[i].first%k ;

            a[i].first = z;
        }
        if (a[i].first % k == 0)
        {
            a[i].first = k;
        }
    }
    sort(a.begin(), a.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        if (x.first != y.first)
            return x.first > y.first;
            return x.second < y.second;
       
    });
    for (int i = 0; i < n; i++)
    {

        cout << a[i].second << " ";
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