class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0 || s.size() == 1) {
            return true;
        }
        string filtered = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                filtered += tolower(s[i]);
            }
        }

        int st = 0;
        int end = filtered.size() - 1;
        while (st < end) {
            if (filtered[st] != filtered[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};