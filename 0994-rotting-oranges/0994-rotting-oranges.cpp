class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int, int>> q;
        int fresh=0;
        int time=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        vector<vector<int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty() && fresh!=0){
            int size=q.size();
            time++;
            while(size--){
                auto [x,y]=q.front();
                q.pop();
                for (int i=0;i<4;i++){
                    int nx=x+dirs[i][0];
                    int ny=y+dirs[i][1];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }
        }
        if (fresh){
            return -1;
        }
        return time;
        
    }
};