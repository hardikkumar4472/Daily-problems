class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ct=0;
        for (int i=0;i<=nums.size()-3;i++){
            int fe=nums[i];
            int se=nums[i+1];
            int te=nums[i+2];
            if ((fe+te)==se/2.0){
                ct++;
            }
        }
        return ct;
    }
};