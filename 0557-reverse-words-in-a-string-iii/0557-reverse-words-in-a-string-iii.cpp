class Solution {
public:
    string reverseWords(string s) {
        stack<char> temp;
        string ans = "";
        temp.push(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp.push(s[i]);
            } else {
                while (!temp.empty()) {
                    ans += temp.top();
                    temp.pop();
                }
                ans += ' ';
            }
        }
        while (!temp.empty()) {
            ans += temp.top();
            temp.pop();
        }
        return ans;
    }
};
