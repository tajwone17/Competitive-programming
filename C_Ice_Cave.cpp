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
bool dfs(vector<vector<char>> &a, int r1, int c1, int r2, int c2)
{
    int n = a.size();
    int m = a[0].size();

    bool ispos = false;
    if (r1 >= 0 && c1 >= 0 && r1 < n && c1 < m)

    {
        if (r1 == r2 && c1 == c2 && a[r1][c1] == '.' && a[r1][c1 - 1] == '.' || a[r1][c1 + 1] == '.' || a[r1 - 1][c1] == '.' || a[r1 + 1][c1] == '.')
        {
            return true;
            ispos = true;
        }
        if (r1 == r2 && c1 == c2 && a[r1][c1] == 'X')
        {
            return true;
            ispos = true;
        }
        // a[r1][c1] == 'X';

        // Recursive calls for all four directions
        if (a[r1][c1 - 1] == '.')
            ispos |= dfs(a, r1, c1 - 1, r2, c2);
        if (a[r1][c1 + 1] == '.')
            ispos |= dfs(a, r1, c1 + 1, r2, c2);
        if (a[r1 - 1][c1] == '.')
            ispos |= dfs(a, r1 - 1, c1, r2, c2);
        if (a[r1 + 1][c1] == '.')
            ispos |= dfs(a, r1 + 1, c1, r2, c2);
    }
    return ispos;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    bool ans = dfs(a, r1, c1, r2, c2);
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

main()
{
    faster;
    solve();
}
