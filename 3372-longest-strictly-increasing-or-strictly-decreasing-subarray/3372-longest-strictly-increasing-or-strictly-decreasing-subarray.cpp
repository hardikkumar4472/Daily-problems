class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ml=0;
        for (int i=0;i<nums.size();i++){
            int cs=1;
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]>nums[j-1]){
                    cs++;
                }
                else{
                    break;
                }
            } 
            ml=max(ml,cs);
        }
        for (int i=0;i<nums.size();i++){
            int cs=1;
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]<nums[j-1]){
                    cs++;
                }
                else{
                    break;
                }
            } 
            ml=max(ml,cs);
        }
        return ml;
    }
};