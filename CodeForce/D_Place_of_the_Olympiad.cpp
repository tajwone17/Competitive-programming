#include <bits/stdc++.h>
using namespace std;

#define faster                    \
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
// // long long mod(long long x){
// //     return ((x%M + M)%M);
// // }
// // long long add(long long a, long long b){
// //     return mod(mod(a)+mod(b));
// // }
// long long mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
void solve()
{
    int r, c, k, mid;
    cin >> r >> c >> k;
    int left = 0, right = c;

    while (left + 1 < right)
    {
        mid = (left + right) / 2;
        if ((c / (mid + 1) * mid + c % (mid + 1)) * r >= k)
            right = mid;
        else
            left = mid;
    }
    cout << right << endl;
}

main()
{
    faster;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
}