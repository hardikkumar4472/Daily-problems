class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int result1=nums[n-1]*nums[n-2]*nums[n-3];
        int result2=nums[0]*nums[1]*nums[n-1];
        return max(result1,result2);

        
    }
};