class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0;
        int xor2 = 0;
        int len1 = nums1.size();
        int len2 = nums2.size();
        if (len2 % 2 != 0) {
            for (int num : nums1) {
                xor1 ^= num;
            }
        }

        if (len1 % 2 != 0) {
            for (int num : nums2) {
                xor2 ^= num;
            }
        }
        return xor1 ^ xor2;
    }
};