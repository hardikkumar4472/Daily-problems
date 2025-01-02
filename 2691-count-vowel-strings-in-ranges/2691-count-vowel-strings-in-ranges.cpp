class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    int n = words.size();
    
    vector<int> valid(n, 0);
    
    for (int i = 0; i < n; i++) {
        string word = words[i];
        if (isVowel(word[0]) && isVowel(word[word.length() - 1])) {
            valid[i] = 1;
        }
    }
    vector<int> prefix(n, 0);
    prefix[0] = valid[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + valid[i];
    }
    vector<int> ans;
    for (const auto& query : queries) {
        int li = query[0], ri = query[1];
        if (li == 0) {
            ans.push_back(prefix[ri]);
        } else {
            ans.push_back(prefix[ri] - prefix[li - 1]);
        }
    }
    
    return ans;
    }
};