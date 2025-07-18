class Solution {
public:
    int climbStairs(int n) {
        // Iterative
        // if (n == 1) return 1;
        // if (n == 2) return 2;
        // int a = 1; 
        // int b = 2; 
        // int c;
        // for (int i = 3; i <= n; i++) {
        //     c = a + b;
        //     a = b;
        //     b = c;
        // }
        // return b;

        //Recursion (TLE)
        // if (n==0 || n==1){
        //     return 1;
        // }
        // return climbStairs(n-1)+climbStairs(n-2);
        

        //Memoization
        // vector<int> dp(n+1,-1);
        // return memoization(n, dp);

        //Tabulation
        vector<int> vec(n+1,0);
        vec[0]=1;
        vec[1]=1;
        for (int i=2;i<=n;i++){
            vec[i]=vec[i-1]+vec[i-2];
        }
        return vec[n];
    }
     int memoization(int n, vector<int>&dp){
        if(n==1||n==0){
            return 1;
        }
        if (dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=memoization(n-1,dp)+memoization(n-2,dp);
    }
    
};
