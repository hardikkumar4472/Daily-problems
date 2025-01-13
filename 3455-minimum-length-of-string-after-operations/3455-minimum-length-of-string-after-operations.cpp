class Solution {
public:
    int minimumLength(string s) {
      vector<int> cf(26,0);
      int tl=0;
      for (char i:s){
        cf[i-'a']++;
      }
      for (int f:cf){
        if (f==0){
            continue;
        }
        if (f%2==0){
            tl+=2;
        }
        else{
            tl+=1;
        }
      }
      return tl;  
    }
};