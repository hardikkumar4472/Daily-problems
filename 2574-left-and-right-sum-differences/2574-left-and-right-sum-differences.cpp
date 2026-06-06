class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> right;
        vector<int> left;
        vector<int> res;
        for (int i=0;i<nums.size()-1;i++){
            int prod=0;
            for (int j=i+1;j<nums.size();j++){
                prod+=nums[j];
            }
            right.push_back(prod);
        }
        right.push_back(0);
        left.push_back(0);
        for (int i=0;i<nums.size()-1;i++){
            int sum=0;
            for (int j=i;j>=0;j--){
                sum+=nums[j];
            }
            left.push_back(sum);
        }
        for (int i=0;i<nums.size();i++){
            res.push_back(abs(left[i]-right[i]));
        }
        return res;
    }
};