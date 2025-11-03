class Solution {
public:
     void helper(vector<string>& words, vector<int>& groups, int i, vector<string>& ans) {
        if (i >= words.size()) return;
        if (i == 0 || groups[i] != groups[i - 1]) {
            ans.push_back(words[i]);
        }
        helper(words, groups, i + 1, ans);
    }
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        helper(words, groups, 0, ans);
        return ans;
    }
};
