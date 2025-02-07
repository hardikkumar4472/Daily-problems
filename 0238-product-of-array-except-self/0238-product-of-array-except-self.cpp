class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int currProd = nums[0];
        for(int i = 1; i < nums.size(); i++){
            ans[i] = currProd;
            currProd *= nums[i];
        }
        currProd = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            ans[i] *= currProd;
            currProd *= nums[i];
        }
        return ans;
    }
};