class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.length()>s.find(part)){
           s.erase(s.find(part),part.length());
        }
        return s;
    }
};
