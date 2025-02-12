class Solution {
public:
    int digitSum(int num){
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int maxSum = -1;
        unordered_map<int, vector<int>> mp;
        for(int num:nums){
            int sum = digitSum(num);
            mp[sum].push_back(num);
        }
        for(auto& m:mp){
            if(m.second.size() >= 2){
                sort(m.second.rbegin(), m.second.rend());
                int sum = m.second[0] + m.second[1];
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;
    }
};