class Solution {
public:
    string clearDigits(string s) {
        int j=0;
        while (j!=s.size()){
            if (isdigit(s[j])){
                s.erase(j,1);
                s.erase(j-1,1);
                j-=2;
            }
            j++;
        }
    return s;
    }
};