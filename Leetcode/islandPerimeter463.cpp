class Solution
{
public:
    int dfs(vector<vector<int>> &grid, vector<vector<int>> &vis, int i, int j)
    {
        int peri = 0;
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0)
            return 1;
        if (vis[i][j] == 1)
            return 0;

        vis[i][j] = 1;

        peri += dfs(grid, vis, i, j - 1);
        peri += dfs(grid, vis, i, j + 1);
        peri += dfs(grid, vis, i - 1, j);
        peri += dfs(grid, vis, i + 1, j);
        return peri;
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 1)
                    return dfs(grid, vis, i, j);
            }
        }
        return 0;
    }
};