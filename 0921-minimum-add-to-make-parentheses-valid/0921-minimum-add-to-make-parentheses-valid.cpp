class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0;
        int cl=0;
        for (char c: s){
            if (c=='('){
                o++;
            }
            else if (c==')' && o==0){
                cl++;
            }
            else{
                o--;
            }
        }
        return abs(o+cl);
    }
};