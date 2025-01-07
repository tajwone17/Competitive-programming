#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dfs(vector<vector<int>> &grid, vector<vector<int>> &vis, int i, int j)
{

    int n = grid.size();
    int m = grid[0].size();

    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1 || grid[i][j] == 0)
        return 0;

    vis[i][j] = 1;
    int s = grid[i][j];
    s += dfs(grid, vis, i, j - 1);
    s += dfs(grid, vis, i, j + 1);
    s += dfs(grid, vis, i - 1, j);
    s += dfs(grid, vis, i + 1, j);

    return s;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, mx = 0;
        cin >> n >> m;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        vector<vector<int>> g(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> g[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (vis[i][j] == 0 && g[i][j] > 0)
                {
                    mx = max(mx, dfs(g, vis, i, j));
                }
            }
        }
        cout << mx << endl;
    }
}