class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i ++){
            if(nums[i] == nums[i + 1]){
                return nums[i];
            }
            if(i + 2 < nums.size() && nums[i] == nums[i + 2]){
                return nums[i];
            }
            if(i + 3 < nums.size() && nums[i] == nums[i + 3]){
                return nums[i];
            }
        }
        return -1;
    }
}; 