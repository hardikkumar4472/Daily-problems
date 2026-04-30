class Solution {
public:
    bool canJump(vector<int>& nums) {
        //bruteforce
        int curr=0;
        for (int i=0;i<nums.size();i++){
            curr=max(curr,nums[i]+i);
            if (curr>=nums.size()-1){
                return true;
            }
            if (curr<=i){
                return false;
            }
        }
        return false;
    }
};