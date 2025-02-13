class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a = -1;
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)<=k && nums[j]==key){
                    a=i;
                }
            }
            if(a!=-1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};