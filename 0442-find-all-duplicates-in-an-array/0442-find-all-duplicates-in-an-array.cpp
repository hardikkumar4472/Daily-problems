class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for (int i: nums){
            mp[i]++;
        }
        for (auto j : mp){
            if (j.second==2){
                ans.push_back(j.first);
            }
        }
        return ans;
        
    }
};