class Solution {
public:
    // Pure recursion (no memo)
    int recursion(int i, int j){
        if (i == 0 && j == 0) return 1;
        if (i < 0 || j < 0) return 0;
        return recursion(i - 1, j) + recursion(i, j - 1);
    }

    // Memoization (Top-down DP)
    int memoization(vector<vector<int>>& dp, int i, int j) {
        if (i == 0 && j == 0) return 1;
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = memoization(dp, i - 1, j) + memoization(dp, i, j - 1);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return memoization(dp, m - 1, n - 1);
    }
};
