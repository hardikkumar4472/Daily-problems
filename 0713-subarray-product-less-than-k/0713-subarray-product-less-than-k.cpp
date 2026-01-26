class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        long long prod=1;
        int count=0;
        if (k<=1){
            return 0;
        }
        for (int j=0;j<nums.size();j++){
            prod*=nums[j];
            while (prod>=k){
                prod/=nums[i];
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }
};