class Solution {
public:
    int f(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if (i == 0 && j == 0) return grid[0][0]; // Start point
        if (i < 0 || j < 0) return 1e9; // Large number, as path is invalid

        if (dp[i][j] != -1) return dp[i][j];

        int up = grid[i][j] + f(i - 1, j, grid, dp);
        int left = grid[i][j] + f(i, j - 1, grid, dp);

        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return f(n - 1, m - 1, grid, dp);
    }
};
