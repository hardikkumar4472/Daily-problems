class Solution {
public:
    void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}
    int lengthOfLastWord(string s) {
        rtrim(s);
        int i = s.length()-1;
        int res = 0;
        while (i>=0 && s[i] != ' ') {
            i--;
            res++;
        }
        return res;
    }
};