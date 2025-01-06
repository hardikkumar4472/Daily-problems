class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length());
        for (int i=0;i<boxes.length();i++){
            if (boxes[i]=='1'){
                for (int j=0;j<boxes.length();j++){
                    ans[j]+=(abs(j-i));
                }
            }
        }
        return ans;
    }
};