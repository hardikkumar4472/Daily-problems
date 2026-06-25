class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            int tc=0;
            for (int j=i;j<nums.size();j++){
                if (nums[j]==target){
                    tc++;
                }
                int tl=j-i+1;
                if(2*tc>tl){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};