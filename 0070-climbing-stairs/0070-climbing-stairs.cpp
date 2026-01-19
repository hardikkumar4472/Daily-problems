class Solution {
public:
    // int memo(int n, vector<int> &dp){
    //     if (n==0 || n==1){
    //         return 1;
    //     }
    //     if (dp[n]!=-1){
    //         return dp[n];
    //     }
    //     return dp[n]=memo(n-1,dp)+memo(n-2,dp);
    // }

    int climbStairs(int n) {
        //Recursion
        // if (n==0 || n==1){
        //     return 1;
        // };
        // return climbStairs(n-1)+climbStairs(n-2);

        //Tabulation
        // vector<int> dp(n+1, -1);
        // return memo(n,dp);

        //Memoization
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for (int i=2;i< dp.size();i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};