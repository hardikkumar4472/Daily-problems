class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);
        for (int i = 0; i < n; i++) diff[i] = nums[i] - i;
        sort(diff.begin(), diff.end());
        long long good = 0, count = 1;
        for (int i = 1; i < n; i++) {
            if (diff[i] == diff[i - 1]) count++;
            else { good += count * (count - 1) / 2; count = 1; }
        }
        good += count * (count - 1) / 2;
        return (long long) n * (n - 1) / 2 - good;
    }
};