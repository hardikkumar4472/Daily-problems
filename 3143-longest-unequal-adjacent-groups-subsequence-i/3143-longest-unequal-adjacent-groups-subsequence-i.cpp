class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> temp;
        int n = words.size();
        if (n == 0) return temp;
        for (int i = 0; i < n; ++i) {
            if (i > 0 && groups[i] == groups[i-1]) continue;
            temp.push_back(words[i]);
        }
        return temp;
    }
};
