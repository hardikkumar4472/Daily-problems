class Solution {
public:
    // int recursion(vector<int>& cost, int i){
    //     if (i<0){
    //         return 0;
    //     }
    //     if (i==0 || i==1){
    //         return cost[i];
    //     }
    //     return cost[i]+min(recursion(cost,i-1),recursion(cost,i-2));
    // }
    // int memoization(vector<int> &dp, int i, vector<int> &cost){
    //     if (i==0 || i==1){
    //         return cost[i];
    //     }
    //     if (dp[i]!=-1){
    //         return dp[i];
    //     }
    //     return dp[i]=cost[i]+min(memoization(dp,i-1,cost), memoization(dp,i-2,cost));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        // return min(recursion(cost, cost.size()-1),recursion(cost,cost.size()-2));

        //Memoization
        // vector<int> dp(cost.size()+1,-1);
        // return min(memoization(dp,cost.size()-1,cost),memoization(dp,cost.size()-2,cost));

        //Tabulation
        int n=cost.size();
        vector<int> dp(cost.size(),0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for (int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);

    }
};