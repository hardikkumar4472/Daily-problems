class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int bitMask = 0, l = 0, maxLength = 0;

        for (int r = 0; r < n; ++r) {
            while ((bitMask & nums[r]) != 0) {
                bitMask ^= nums[l];
                ++l;
            }
            bitMask |= nums[r];
            maxLength = max(maxLength, r - l + 1);
        }
        return maxLength;
    }
};