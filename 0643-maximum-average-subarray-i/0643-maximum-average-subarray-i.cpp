class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = INT_MIN;
        for (int i = 0; i <= nums.size() - k; i++) {
            double tempSum = 0;
            for (int j = i; j < i + k; j++) {
                tempSum += nums[j];
            }
            maxSum = max(maxSum, tempSum);
        }
        return maxSum / k;
    }
};