class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        for (int i=0;i<nums.size();i++){
            int temp=1;
            for (int j=0;j<i;j++){
                temp*=nums[j];
                prod=max(prod,temp);
            }
        }
        return prod;
        
    }
};