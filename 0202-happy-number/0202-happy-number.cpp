class Solution {
public:
    int next(int n){
        int temp=n;
        int sum=0;
        while(temp>0){
            int rem=temp%10;
            sum+=rem*rem;
            temp/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=next(n);
        int fast=next(next(n));
        while (slow!=fast) {
            slow= next(slow);
            fast=next(next(fast));
        }
        return slow==1;
    }
};