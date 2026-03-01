class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxlength=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if (!st.empty()){
                    maxlength=max(maxlength,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        return maxlength;
    }
};
