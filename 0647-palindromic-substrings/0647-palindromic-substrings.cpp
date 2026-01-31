class Solution {
public:
    bool palindrome(string s){
        int i=0;
        int j=s.size()-1;
        while (i<j){
            if (s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ct=0;
        for (int i=0;i<s.length();i++){
            for (int j=i;j<s.length();j++){
                if (palindrome(s.substr(i,j-i+1))){
                    ct++;
                }
            }
        }
        return ct;
    }
};