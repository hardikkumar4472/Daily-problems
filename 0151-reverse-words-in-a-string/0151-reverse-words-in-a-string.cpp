class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string t;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && t == "") {
                continue;
            }
            if (s[i] == ' ') {
                st.push(t);
                t = "";
            } else {
                t += s[i];
            }
        }
        if (t != "") {
            st.push(t);
        }
        string r = st.top();
        st.pop();
        while (!st.empty()) {

            r += " " + st.top();
            st.pop();
        }
        return r;
    }
};