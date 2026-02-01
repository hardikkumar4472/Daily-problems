class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (s.length() < p.length()){
             return res;
        }
        map<char,int> mp1;
        for (char c : p) {
            mp1[c]++;
        }
        for (int i = 0; i <= s.length() - p.length(); i++) {
            map<char,int> mp2;
            for (int j = i; j < i + p.length(); j++) {
                mp2[s[j]]++;
            }
            if (mp1 == mp2) {
                res.push_back(i);
            }
        }
        return res;
    }
};
