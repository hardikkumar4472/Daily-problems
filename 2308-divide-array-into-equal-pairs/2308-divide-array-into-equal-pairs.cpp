class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res; 
        int temp=0;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i]==nums[i+1]){
                res.push_back({nums[i],nums[i+1]});
            }
            i++;
        }
        for (int j=0;j<res.size();j++){
            if (res[j][0]==res[j][1]){
               temp++;
            }
        }
        if (res.size()==(nums.size()/2) && res.size()==temp){
            return true;
        }
        return false;
    }
};