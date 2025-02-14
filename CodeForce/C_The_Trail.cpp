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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int arr[n][m];
    vector<int> r(n), c(m);
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; ++j)
        {
            sum += arr[i][j];
        }
        r[i] = sum;
    }
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += arr[i][j];
        }
        c[j] = sum;
    }
    int x = 0, y = 0, cnt = 0;
    while (cnt < n + m - 1)
    {
        if (s[cnt] == 'R')
        {
            arr[x][y] = -c[y];
            r[x] += arr[x][y];
            c[y] += arr[x][y];
            y++;
        }
        else
        {
            arr[x][y] = -r[x];
            r[x] += arr[x][y];
            c[y] += arr[x][y];
            x++;
        }
        cnt++;
    }
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
main()
{
    faster;
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        solve();
    }
}