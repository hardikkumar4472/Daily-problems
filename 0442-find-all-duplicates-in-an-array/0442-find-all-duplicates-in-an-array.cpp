class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        if (nums.size()==2 && nums[0]==nums[1]){
            ans.push_back(nums[0]);
        }
        if (nums.size()>2 && (nums[0]==nums[1] && nums[0]!=nums[2])){
            ans.push_back(nums[0]);
        }
        for (int i=2;i<nums.size();i++){
            if (nums[i]==nums[i-1] && nums[i]!=nums[i-2]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};