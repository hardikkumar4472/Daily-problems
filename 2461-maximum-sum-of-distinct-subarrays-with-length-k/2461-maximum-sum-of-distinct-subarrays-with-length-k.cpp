class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long max_sum = 0;
        long long current_sum = 0;
        unordered_map<int, int> freq;      
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
            freq[nums[i]]++;
        }
        if (freq.size() == k) {
            max_sum = current_sum;
        }
        for (int i = k; i < nums.size(); i++) {
            current_sum += nums[i];
            freq[nums[i]]++;           
            int old_element = nums[i - k];
            current_sum -= old_element;
            freq[old_element]--;           
            if (freq[old_element] == 0) {
                freq.erase(old_element);
            }           
            if (freq.size() == k) {
                max_sum = max(max_sum, current_sum);
            }
        }        
        return max_sum;
    }
};