class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if (grid[0][0]==1){
            return -1;
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        while (!q.empty()){
            auto [row,col]=q.front();
            q.pop();
            int dist=grid[row][col];
            if (row==n-1 && col==n-1){
                return dist;
            }
            for (int i=0;i<8;i++){
                int newRow=row+dir[i][0];
                int newCol=col+dir[i][1];
                if (newRow>=0 && newRow<n && newCol<n && newCol>=0 && grid[newRow][newCol]==0){
                    grid[newRow][newCol]=dist+1;
                    q.push({newRow, newCol});
                }

            }
        }
        return -1;
        
    }
};