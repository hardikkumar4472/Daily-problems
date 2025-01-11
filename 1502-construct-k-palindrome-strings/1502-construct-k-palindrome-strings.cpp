class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        if (s.length() == k) return true;
        vector<int> freq(26);
        int oddCount = 0;
        for (auto& chr : s) freq[chr - 'a']++;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                oddCount++;
            }
        }
        return (oddCount <= k);
    }
};