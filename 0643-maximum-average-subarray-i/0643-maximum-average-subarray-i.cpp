class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_sum=0;
        for (int i=0;i<k;i++){
            curr_sum+=nums[i];
        }
        double max_sum=curr_sum;
        for (int j=k;j<nums.size();j++){
            curr_sum+=nums[j]-nums[j-k];
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum/k;
    }
};