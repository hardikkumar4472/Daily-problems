class Solution {
public:
    int robLinear(vector<int>& nums, int start, int end) {
        int m1 = 0, m2 = 0;
        for (int i = start; i <= end; i++) {
            int temp = max(m1, m2 + nums[i]);
            m2 = m1;
            m1 = temp;
        }
        return m1;
    }

    int rob(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        return max(robLinear(nums, 0, nums.size() - 2),
                   robLinear(nums, 1, nums.size() - 1));
    }
};
