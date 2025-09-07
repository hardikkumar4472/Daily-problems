class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n), prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            long left, right;
            if (i > 0) {
                left = (long)nums[i] * i - prefix[i - 1];
            } else {
                left = 0;
            }
            right = (long)(prefix[n - 1] - prefix[i]) - (long)nums[i] * (n - i - 1);
            res[i] = left + right;
        }

        return res;
    }
};
