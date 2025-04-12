class Solution {
public:
    double calpower(double x, long long int n){
        double ans = 1;
       if(n==0)return 1;
       if (n==1)return x;
       if(n<0){
        x = 1/x;
        n = -n;
       }
    double half = calpower(x,n/2);
       ans = (n%2== 0) ? (half*half):x*(half*half);
        return ans;
    }
    double myPow(double x, int n) {
        return calpower(x, n);
    }
};