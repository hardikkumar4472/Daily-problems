class Solution {
public:
    // string binary(int n){
    //     string ans="";
    //     while (n!=0){
    //         if (n%2==0){
    //             ans+='0';
    //         }
    //         else if (n%2!=0){
    //             ans+='1';
    //         }
    //         n/=2;
    //     }
    //     ans+=1;
    //     return ans;
    // }
    // int getCount(string s){
    //     int ct=0;
    //     for (char c: s){
    //         if (c=='1'){
    //             ct+=1;
    //         }
    //     }
    //     return ct;
    // }
    // int recursion(int n){
    //     if (n==0){
    //         return 0;
    //     }
    //     return (n%2)+recursion(n/2);
    // }
    int memo(int n, vector<int> &dp){
        if (n==0){
            return 0;
        }
        if (dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=(n%2)+memo(n/2,dp);

    }
    vector<int> countBits(int n) {
        vector<int> dp(n+1,-1);
        vector<int> ans(n+1);
        for (int i=0;i<=n;i++){
            ans[i]=memo(i,dp);
        }
        return ans;
    }
};