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

void dfs(char arr[][100], int n, int m, int i, int j, int nc, int ic) {
    // Boundary and color check
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] != ic)
        return;

    // Change the current pixel's color to the new color
    arr[i][j] = nc;

    // Recursive calls for all four directions
    dfs(arr, n, m, i, j - 1, nc, ic);
    dfs(arr, n, m, i, j + 1, nc, ic);
    dfs(arr, n, m, i - 1, j, nc, ic);
    dfs(arr, n, m, i + 1, j, nc, ic);
}

main()
{
    faster;
    int n, m, k;
    cin >> n >> m >> k;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}