class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        for (int i=1;i<10;i++){
            long temp=pow(5,i);
            res+=n/temp;
        }
        return res;
    }
};