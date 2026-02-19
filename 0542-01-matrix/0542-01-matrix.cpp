class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
                    q.push({i, j});
                } else {
                    mat[i][j] = -1;
                }
            }
        }
        int dir[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
        while(!q.empty()) {
            auto front = q.front();
            q.pop();    
            int row = front.first;
            int col = front.second; 
            for(int i = 0; i < 4; i++) {
                int newRow = row + dir[i][0];
                int newCol = col + dir[i][1];     
                if(newRow >= 0 && newRow < n &&
                   newCol >= 0 && newCol < m &&
                   mat[newRow][newCol] == -1) {  
                    mat[newRow][newCol] = mat[row][col] + 1;
                    q.push({newRow, newCol});
                }
            }
        }
        return mat;
    }
};
