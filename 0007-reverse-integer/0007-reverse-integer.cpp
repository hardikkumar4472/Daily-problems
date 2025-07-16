class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        long rev=0;
        if (x<0){
            neg=true;
        }
        int temp=abs(x);
        while (temp!=0){
            long rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        if (neg==true){
            return -rev;
        }
        return rev;
    }
};