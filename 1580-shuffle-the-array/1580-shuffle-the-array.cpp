class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        int i=0;
        int j=n;
        while (i<nums.size()/2 && j<nums.size()){
            vec.push_back(nums[i]);
            vec.push_back(nums[j]);
            i++;
            j++;
        }
        return vec;
    }
};