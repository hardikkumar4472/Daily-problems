class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                int ans=(nums[j]-nums[i]);
                maxi =max(maxi,ans);
            }
        }
        if (maxi==0){
            return -1;
        }
        return maxi;
    }
};