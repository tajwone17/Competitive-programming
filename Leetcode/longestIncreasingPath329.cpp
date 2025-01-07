class Solution {
public:
   int dfs(vector<vector<int>> &grid, vector<vector<int>> &memo, int i, int j)
    {
        
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m )
            return 0;
      int currentMax=1;
        if(memo[i][j]!=0)
        return memo[i][j];
        
        if(j-1>=0 && j-1<m  && grid[i][j]<grid[i][j-1]){
           
            currentMax=max(currentMax,1+dfs(grid,memo,  i, j - 1)) ;

        }
         if(j+1>=0 && j+1<m && grid[i][j]<grid[i][j+1]){
            
            currentMax=max(currentMax,1+dfs(grid, memo, i, j + 1));

        }
          if(i-1>=0 && i-1<n && grid[i][j]<grid[i-1][j]){
          
            currentMax=max(currentMax,1+dfs(grid,memo,  i-1, j));

        }
         if(i+1>=0 && i+1<n && grid[i][j]<grid[i+1][j]){
          
           currentMax=max(currentMax,1+dfs(grid,memo,  i+1, j));

        }
        memo [i][j]=currentMax;
       return currentMax;
        
    }
    int longestIncreasingPath(vector<vector<int>>& grid) {
         int n = grid.size();
        int m = grid[0].size();
  vector<vector<int>> memo(n, vector<int>(m, 0));
   int Max=0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                
                    Max=max(Max, dfs(grid,memo,  i, j));
            }
        }
        return Max;
    }
};