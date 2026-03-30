class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int left = 0;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            while (sum >= target) {
                ans = min(ans, i - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};