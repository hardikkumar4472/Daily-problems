class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (string& word : words) {
            count += hasPrefix(word, pref);
        }
        return count;
    }

private:
    int hasPrefix(string& str, string& pref) {
        int itr;
        for (itr = 0; itr < str.length() && itr < pref.length(); itr++) {
            if (str[itr] != pref[itr]) {
                return 0;  
            }
        }

        if (itr != pref.length()) {
            return 0;
        }
        return 1;
    }
};