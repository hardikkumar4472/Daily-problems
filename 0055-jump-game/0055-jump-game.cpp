class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr=max(curr,nums[i]+i);
            if(curr>=nums.size()-1)return 1;
            if(curr<=i)return 0;
        }
        return 0;
    }
};