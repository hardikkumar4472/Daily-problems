class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        for (int i=0;i<nums.size();i++){
            int temp=1;
            for (int j=i;j<nums.size();j++){
                temp*=nums[j];
                prod=max(prod,temp);
            }
        }
        return prod;
        
    }
};