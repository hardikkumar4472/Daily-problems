class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        int ls = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rs = total - ls - nums[i];
            if (ls == rs) {
                return i;
            }
            ls += nums[i];
        }

        return -1;
    }
};
