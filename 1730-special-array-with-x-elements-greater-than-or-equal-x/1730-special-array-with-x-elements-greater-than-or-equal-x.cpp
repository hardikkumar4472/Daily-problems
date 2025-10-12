class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<vector<int>> vec;
        for (int i=0;i<=nums.size();i++){
            int ct=0;
            for (int j=0;j<nums.size();j++){
                if (i<=nums[j]){
                    ct++;
                }
            }
            vec.push_back({i,ct});
        }
        for (int i=0;i<vec.size();i++){
            if (vec[i][0]==vec[i][1]){
                return vec[i][1];
            }
        }
        return -1;
    }
};