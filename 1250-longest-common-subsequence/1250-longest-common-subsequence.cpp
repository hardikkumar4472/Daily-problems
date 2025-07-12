// class Solution {
// public:
//     int recur(int ind1, int ind2, string text1, string text2){
//         if(ind1<0 || ind2<0) return 0;

//         if(text1[ind1] == text2[ind2]){
//             return 1+ recur(ind1-1, ind2-1, text1, text2);
//         }

//         return max(recur(ind1-1, ind2, text1, text2), recur(ind1, ind2-1, text1, text2));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size();
//         int m = text2.size();

//         return recur(n-1, m-1, text1, text2);
//     }
// };

//Memoization
class Solution {
public:
    int recur(int ind1, int ind2, string text1, string text2, vector<vector<int>>&dp){
        if(ind1<0 || ind2<0) return 0;
        if(dp[ind1][ind2]!= -1) return dp[ind1][ind2];

        if(text1[ind1] == text2[ind2]){
            dp[ind1][ind2] = 1+ recur(ind1-1, ind2-1, text1, text2, dp);
        }
        else 
        dp[ind1][ind2] = max(recur(ind1-1, ind2, text1, text2, dp), recur(ind1, ind2-1, text1, text2, dp));

        return dp[ind1][ind2];
    }
    int lcsTab(string s1, string s2){
    int n=s1.length();
    int m=s2.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    for (int i=1;i<n+1;i++){
        for (int j=1;j<m+1;j++){
            if (s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        // vector<vector<int>>dp(n, vector<int>(m, -1));
        // return recur(n-1, m-1, text1, text2, dp);
        return lcsTab(text1,text2);
    }
};
