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
    int n, m, countA = 0, countB = 0;
    cin >> n >> m;
    int arr[n][m];
    unordered_map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (j % 2 == 0 && i % 2 == 0 || j % 2 == 1 && i % 2 == 1)
            {
                mp1[arr[i][j]]++;
                countA++;
            }
            else
            {
                mp2[arr[i][j]]++;
                countB++;
            }
        }
    }
    int mx1 = 0, mx2 = 0, mx, mxx1, mxx2;
    for (auto it1 : mp1)
    {
        mx1 = max(mx1, it1.second);
        mxx1 = it1.first;
    }
    for (auto it2 : mp2)
    {
        mx2 = max(mx2, it2.second);
        mxx2 = it2.first;
    }
    if (mx1 >= mx2)
    {
        cout << (countA - mx1) + countB - mp2[mxx1] << endl;
    }
    else
        cout << (countB - mx2) + countA - mp1[mxx2] << endl;
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