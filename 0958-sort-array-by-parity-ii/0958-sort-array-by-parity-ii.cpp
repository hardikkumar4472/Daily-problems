class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> alt;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        for (int i=0;i<even.size();i++){
            alt.push_back(even[i]);
            alt.push_back(odd[i]);
        }
        return alt;
    }
};