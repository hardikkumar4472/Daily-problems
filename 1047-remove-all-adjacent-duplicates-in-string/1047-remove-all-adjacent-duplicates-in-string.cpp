class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ans;
        string st="";
        for (int i=0;i<s.length();i++){
            if (!ans.empty() && (s[i]==ans.top())){
                ans.pop();
            }
            else{
                ans.push(s[i]);
            }
        }
        while (!ans.empty()){
            st+=ans.top();
            ans.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};