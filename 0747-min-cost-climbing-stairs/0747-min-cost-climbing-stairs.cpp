class Solution {
public:
    int recursion(vector<int>& cost, int i){
        if (i<0){
            return 0;
        }
        if (i==0 || i==1){
            return cost[i];
        }
        return cost[i]+min(recursion(cost,i-1), recursion(cost,i-2));
    }

    int memoization(vector<int>& cost, vector<int>& dp, int i) {
        if (i < 0){
            return 0;
        }
        if (i == 0 || i == 1) {
            return cost[i];
        }
        if (dp[i] != -1){
            return dp[i];
        }
        
        dp[i] = cost[i] + min(memoization(cost, dp, i-1), memoization(cost, dp, i-2));
        return dp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        //iterative (Not DP)
        // for (int i=2;i<cost.size();i++){
        //     cost[i]+=min(cost[i-1],cost[i-2]);
        // }
        // return min(cost[cost.size()-1],cost[cost.size()-2]);
    

        // recursion [Time Limit Exceeded]
        // int n=cost.size();
        // return min(recursion(cost,n-1),recursion(cost,n-2));

        //Memoization
        // int n = cost.size();
        // vector<int> dp(n, -1); 
        // return min(memoization(cost, dp, n-1), memoization(cost, dp, n-2));

        // Tabulation(Iterative DP)
        int n = cost.size();
        vector<int> dp(n, 0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < n; i++) {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[n-1], dp[n-2]);

    }
};