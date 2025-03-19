class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ct=0;
        for (int i=0;i<=nums.size()-3;i++){
            if (nums[i]==1){
                continue;
            }
            else{
                ct++;
            }
            for (int j=i;j<i+3;j++){
                if (nums[j]==1){
                    nums[j]=0;
                }
                else{
                    nums[j]=1;
                }
            }
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0){
                return -1;
            }
        }
        return ct;
    }
};