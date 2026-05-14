class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;
        if (n <= 0) return false; 
        map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        if (mp.size() != n) return false;
        for (int i = 1; i < n; i++) {
            if (mp[i] != 1) return false;
        }
        if (mp[n] != 2) return false;

        return true;
    }
};