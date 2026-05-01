class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long totalSum = 0;
        long long currentF = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
            currentF += (long long)i * nums[i];
        }
        long long maxVal = currentF;
        for (int i = n - 1; i > 0; i--) {
            currentF = currentF + totalSum - (long long)n * nums[i];
            maxVal = max(maxVal, currentF);
        }

        return (int)maxVal;
    }
};