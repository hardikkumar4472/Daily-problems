class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=INT_MAX;
        int sum=0;
        int j=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                sum-=nums[j];
                len=min(len,i-j+1);
                j++;
            }
        }
        if(len==INT_MAX){
            return 0;
        }
        return len;

    }
};