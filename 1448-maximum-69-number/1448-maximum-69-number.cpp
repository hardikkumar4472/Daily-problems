class Solution {
public:
    int maximum69Number (int num) {
        constexpr int tens[4]={1, 10, 100, 1000};
        for(int d=3; d>=0; d--) {
            int r=num/tens[d]%10;
            if (r==6) 
                return num+3*tens[d];
        }
        return num;     
    }
};