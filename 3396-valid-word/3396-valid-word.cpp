class Solution {
public:
    bool isValid(string word) {
        int a=word.length();
        if(a<3){
            return false;
        }
        bool vowel=0;
        bool conso=0;
        for(auto ch:word){
            if (ch >= '0' && ch <= '9') {
                continue;
            }else if (ch >= 'a' && ch <= 'z') {
                int a=ch-'a';
                if(a==0||a==4||a==8||a==14||a==20){
                    vowel=true;
                }else{
                    conso=true;
                }
            }else if (ch >= 'A' && ch <= 'Z') {
                int a=ch-'A';
                if(a==0||a==4||a==8||a==14||a==20){
                    vowel=true;
                }else{
                    conso=true;
                }
            }else{
                return false;
            }
        }
        return vowel&&conso;
    }
};