class Solution {
public:
    string longestPrefix(string s) {
        // BY KMP algo
        int x=s.size();
        vector <int> lps(x,0);
        int p=0,r=1;
        while(r<x)
        {
            if(s[p]==s[r])
            {
                lps[r]=p+1;
                p++;r++;
            }
            else
            {
                if(p==0)
                {
                    lps[r]=0;
                    r++;
                }
                else
                {
                    p=lps[p-1];
                }
            }
        }
        return s.substr(0,lps[x-1]);
    }
};