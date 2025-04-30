class Solution {
public:
    int countDigits(int num){
        int res=0;
        while (num>0){
            int digit=num%10;
            res++;
            num/=10; 
        }
        return res;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for (int i=0;i<nums.size();i++){
            if (countDigits(nums[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};