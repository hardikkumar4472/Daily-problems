class Solution {
public:
    int findSum(int n){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            ans.push_back(findSum(nums[i]));
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};