class Solution {
public:
    int expandAroundIndex(string &s , int left , int right){
        int count = 0 ;
        while(left >= 0 && right < s.size()){
            if(s[left] == s[right]){
                count++;
            }else{
                break;
            }
            left--;
            right++;
        }
        return count ;
    }

    int countSubstrings(string s) {
        int count = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            int oddCount = expandAroundIndex(s , i , i);
            count = count + oddCount ;
            int evenCount = expandAroundIndex(s , i , i+1);
            count = count + evenCount ;
        }
        return count ;
    }
};