class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size()>magazine.size()){
            return false;
        }
        map<char,int> m1;
        map<char,int> m2;
        for (char ch : ransomNote){
            if (ch!=' '){
                m1[ch]++;
            }
        }
        for (char c : magazine){
            if (c!=' '){
                m2[c]++;
            }
        }
         for (auto& pair : m1) {
            char ch = pair.first;
            int required = pair.second;

            if (m2[ch] < required) {
                return false;
            }
        }

        return true;
    }
};