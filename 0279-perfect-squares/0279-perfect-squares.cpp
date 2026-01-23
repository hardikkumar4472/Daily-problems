class Solution {
public:
    // int recursion(int n) {
    //     if (n == 0) {
    //         return 0;
    //     }
    //     int maxcnt = INT_MAX;
    //     for (int i = 1; i <= sqrt(n); i++) {
    //         int sqnum = i * i;
    //         int crrcnt = 1 + recursion(n-sqnum);
    //         maxcnt=min(maxcnt, crrcnt);
    //     }
    //     return maxcnt;
    // }

    int memoization(vector<int>& dp, int n) {
        if (n == 0) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        int maxcnt = INT_MAX;
        for (int i = 1; i <= sqrt(n); i++) {
            int sqnum = i * i;
            int res = memoization(dp, n - sqnum);
            if (res != INT_MAX) {
                maxcnt = min(maxcnt, 1 + res);
            }
        }
        return dp[n] = maxcnt;
    }
    int numSquares(int n) {
        // Recursion
        //  return recursion(n);

        // Memoization
        vector<int> dp(n + 1, -1);
        return memoization(dp, n);
    }
};