class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int maxEnd=nums[0];
        for (int i=1;i<nums.size();i++){
            maxEnd=max(nums[i], nums[i]+maxEnd);
            res=max(res,maxEnd);
        }
        return res;
    }
};