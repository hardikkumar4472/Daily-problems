class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp=num;
        int ss=0;
        for (int i=1;i<num;i++){
            if(num%i==0){
                ss+=i;
            }
        }
        return ss==temp;
    }
};