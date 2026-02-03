class Solution {
public:
    int recursionBinary(vector<int>& nums, int low, int high){
        if (low==high){
            return low;
        }
        int mid=low+(high-low)/2;
        if (nums[mid]>nums[mid+1]){
           return recursionBinary(nums, low, mid);
        }
        else{
            return recursionBinary(nums,mid+1, high);
        }
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        return recursionBinary(nums, 0, nums.size()-1);        
        
    }
};