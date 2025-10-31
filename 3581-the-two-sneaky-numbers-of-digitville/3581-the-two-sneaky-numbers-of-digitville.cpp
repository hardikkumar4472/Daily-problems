class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int i : nums){
            freq[i]++; 
        }
        vector<int> result;
        for (auto &p : freq){
            if (p.second > 1) result.push_back(p.first);
        }
        return result;
    }
};
