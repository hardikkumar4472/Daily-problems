class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> mp1;
        if (s1.length() > s2.length()){
             return false;
        }
        for (char c: s1){
            mp1[c]++;
        }
        for (int i=0;i<=s2.length()-s1.length();i++){
            map<char, int> mp2;
            for (int j=i;j<i+s1.length();j++){
                mp2[s2[j]]++;
            }
            if (mp1==mp2){
                return true;
            }
        }
        return false;
    }
};