class Solution {
public:

    string removeOccurrences(string s, string part) {
        string st;
        int partLen = part.size();
        for (char c : s) {
            st.push_back(c);
            if (st.size() >= partLen && st.substr(st.size() - partLen) == part) {
                st.erase(st.end() - partLen, st.end()); 
            }
        }
        return st;
    }
};