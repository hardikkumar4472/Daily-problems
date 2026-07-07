class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string temp=to_string(n);
        string t2="";
        for (int i=0;i<temp.length();i++){
            if(temp[i]!='0'){
                t2+=temp[i];
            }
        }
        long long ans=stoi(t2);
        return ans*digitsum(ans);
    }
};