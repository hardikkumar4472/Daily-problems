class Solution {
public:
    bool check(vector<int>& nums) {
        int temp=0;
        for (int i=1;i<nums.size();i++){
            if (nums[i-1]>nums[i]){
                temp++;
            }
        }
        if (nums[nums.size()-1]>nums[0]){
            temp++;
        }
        return temp<=1;
    }
};