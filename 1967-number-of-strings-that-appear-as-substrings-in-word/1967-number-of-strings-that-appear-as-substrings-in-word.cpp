class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for (const string& pattern : patterns) {
            if (word.find(pattern) != string::npos) {
                ans++;
            }
        }
        
        return ans;
    }
};