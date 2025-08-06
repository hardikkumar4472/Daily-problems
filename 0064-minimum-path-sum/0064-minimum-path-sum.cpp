class Solution {
public:
    int recursion(vector<vector<int>>& grid, int i, int j){
        if (i<0 || j<0){
            return 1e9;
        }
        if (i==0 && j==0){
            return grid[0][0];
        }
        int res=grid[i][j];
        return res+ min(recursion(grid,i-1,j),recursion(grid, i, j-1));
    }
    int solveMemo(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i<0 || j<0){ 
            return 1e9;
        }
        if(i==0 && j==0){
            return grid[0][0];
        } ;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=solveMemo(i-1,j,grid,dp);
        int left=solveMemo(i,j-1,grid,dp);
        return dp[i][j]=grid[i][j]+min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        //Recursion
        // return recursion(grid,m-1,n-1);

        //Memoization
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solveMemo(m-1,n-1,grid,dp);
    }
};