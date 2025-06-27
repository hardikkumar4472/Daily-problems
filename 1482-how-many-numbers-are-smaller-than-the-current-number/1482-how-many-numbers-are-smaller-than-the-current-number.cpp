class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec;
        int ct = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    ct++;
                }
            }
            vec.push_back(ct);
            ct = 0;
        }
        return vec;
    }
};