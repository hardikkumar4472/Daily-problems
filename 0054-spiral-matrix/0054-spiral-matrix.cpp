class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int down=n-1;
        int l=0;
        int r=m-1;
        while(top<=down && l<=r){
            for(int i=l;i<=r;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            if(top>down){
                break;
            }
            for(int i=top;i<=down;i++){
                ans.push_back(matrix[i][r]);
            }
            r--;
            if(l>r){
                break;
            }
            for(int i=r;i>=l;i--){
                ans.push_back(matrix[down][i]);
            }
            down--;
            for(int i=down;i>=top;i--){
                ans.push_back(matrix[i][l]);
            }
            l++;
        } 
        return ans;  
    }
};