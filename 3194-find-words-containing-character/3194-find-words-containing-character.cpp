class Solution {
public:
    bool checkCarinWord(string s, char e){
        for (int i=0;i<s.length();i++){
            if (s[i]==e){
                return true;
            }
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i=0;i<words.size();i++){
            if (checkCarinWord(words[i],x)==true){
                res.push_back(i);
            }
        }
        return res;
    }
};