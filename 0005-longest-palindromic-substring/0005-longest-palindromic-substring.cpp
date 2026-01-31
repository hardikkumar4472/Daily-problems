class Solution {
public:
    bool checkPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";

        for (int c = 0; c < n; c++) {
            int i = c, j = c;     
            while (i >= 0 && j < n && checkPalindrome(s, i, j)) {
                if (j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
                i--; j++;
            }

            i = c; j = c + 1; 
            while (i >= 0 && j < n && checkPalindrome(s, i, j)) {
                if (j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
                i--; j++;
            }
        }
        return ans;
    }
};
