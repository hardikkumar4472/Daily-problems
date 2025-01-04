class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> unique_chars(s.begin(), s.end());
        int cnt = 0;
        for (char x : unique_chars) {
            int left = s.find(x);
            int right = s.rfind(x);
            unordered_set<char> middle_chars;
            if (left != right) {
                for (int i = left + 1; i < right; ++i) {
                    middle_chars.insert(s[i]);
                }
            }
            cnt += middle_chars.size();
        }
        return cnt;
    }
};