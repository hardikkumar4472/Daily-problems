class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ct=0;
        long long ls=0;
        long long rs=0;
        for (int i=0;i<nums.size();i++){
            rs+=nums[i];
        }
        for (int i=0;i<nums.size()-1;i++){
            ls+=nums[i];
            rs-=nums[i];
            if (ls>=rs){
                ct++;
            }
        }
        return ct;
    }
};