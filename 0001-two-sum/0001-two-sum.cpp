class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec2;
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    vec2.push_back(i);
                    vec2.push_back(j);
                }
            }
        }
        return vec2;
    }
};
