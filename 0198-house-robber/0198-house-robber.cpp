class Solution {
public:
    int Recursion(int i, vector<int>& nums) {
        if (i == 0)
            return nums[i];
        if (i < 0)
            return 0;
        int pick = nums[i] + Recursion(i - 2, nums);
        int nonPick = Recursion(i - 1, nums);
        return max(pick, nonPick);
    }

    int Memoization(int i, vector<int>& nums, vector<int>& dp) {
        if (i == 0)
            return nums[i];
        if (i < 0)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int pick = nums[i] + Memoization(i - 2, nums, dp);
        int nonPick =Memoization(i - 1, nums, dp);
        return dp[i] = max(pick, nonPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        // With recursion
        //  return Recursion(n - 1, nums);

        // Memoization
        // vector<int> dp(n, -1);
        // return Memoization(n-1, nums,dp);


        //Tabulation
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};
