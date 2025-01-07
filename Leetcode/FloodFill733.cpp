class Solution {
public:
    void dfs(vector<vector<int>> &image, int i, int j, int nc, int ic) {
        int n = image.size();
        int m = image[0].size();

        // Boundary and color check
        if (i < 0 || j < 0 || i >= n || j >= m || image[i][j] != ic)
            return;

        // Change the current pixel's color to the new color
        image[i][j] = nc;

        // Recursive calls for all four directions
        dfs(image, i, j - 1, nc, ic);
        dfs(image, i, j + 1, nc, ic);
        dfs(image, i - 1, j, nc, ic);
        dfs(image, i + 1, j, nc, ic);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
        int ic = image[sr][sc];  // Initial color of the starting pixel

        // If the starting pixel's color is already the new color, do nothing
        if (ic != color) {
            dfs(image, sr, sc, color, ic);
        }

        return image;
    }
};
