class Solution {
public:
    int minAddToMakeValid(string s) {
        if (s==""){
            return 0;
        }
        int lc=0;
        int rc=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='('){
                rc++;
            }
            else if (s[i]==')' && rc==0){
                lc++;
            }
            else{
                rc--;
            }
        }
        return abs(rc+lc);
    }
};