class Solution {
public:
    string binary(int n){
        string ans="";
        while (n!=0){
            if (n%2==0){
                ans+='0';
            }
            else if (n%2!=0){
                ans+='1';
            }
            n/=2;
        }
        ans+=1;
        return ans;
    }
    // int getCount(string s){
    //     int ct=0;
    //     for (char c: s){
    //         if (c=='1'){
    //             ct+=1;
    //         }
    //     }
    //     return ct;
    // }
    int recursion(int n){
        if (n==0){
            return 0;
        }
        return (n%2)+recursion(n/2);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i=0;i<=n;i++){
            ans.push_back(recursion(i));
        }
        return ans;
    }
};