class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};