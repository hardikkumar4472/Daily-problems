class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1;
        stack<int> s2;
        for (int i=0;i<s.length();i++){
            if (s[i]=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(s[i]);
            }
        }
        for (int i=0;i<t.length();i++){
            if (t[i]=='#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }
            else{
                s2.push(t[i]);
            }
        }
        
        return s1==s2;
    }
};