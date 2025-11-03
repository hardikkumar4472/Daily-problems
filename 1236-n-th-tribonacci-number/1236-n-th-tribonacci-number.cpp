class Solution {
public:
    int tribonacci(int n) {
        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        if (n==2){
            return 1;
        }
        int a=0;
        int b=1;
        long long int c=1;
        int d;
        for (int i=0;i<n-2;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};