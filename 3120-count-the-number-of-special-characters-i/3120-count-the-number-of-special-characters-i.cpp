class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> sett(word.begin(), word.end());

        int ans = 0;

        for(char c='a'; c<='z'; c++) {
            if(sett.count(c) && sett.count(c-32)) {
                ans++;
            }
        }

        return ans;
    }
};