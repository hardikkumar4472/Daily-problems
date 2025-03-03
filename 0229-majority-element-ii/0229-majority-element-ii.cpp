class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> mp;
        int x=nums.size()/3;
        for (int element: nums){
            mp[element]++;
        }
        for (const auto& pair : mp){
            if (pair.second>x){
                vec.push_back(pair.first);
            }
        }
        return vec;
    }
};