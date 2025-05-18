class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        for (int i=0;i<=m-n;i++){
            int j=0;
            for (;j<n;j++){
                if (haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if (j==n){
                return i;
            }
        }
        return -1;
    }
};