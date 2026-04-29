class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& matrix, int sr, int sc, int color) {
        vector<vector<int>>dirs={{-1,0},{1,0},{0,-1},{0,1}};
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>ans;
        ans=matrix;
        int check=matrix[sr][sc];
        queue<pair<int,int>>q;
        vector<vector<int>>visited=matrix;
        q.push({sr,sc});
        visited[sr][sc]=-1;
        ans[sr][sc]=color;
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(auto d:dirs){
                int nr=r+d[0];
                int nc=c+d[1];
                if(nr>=0 && nc>=0 && nr<row && nc<col &&
                   visited[nr][nc]!=-1 &&
                   matrix[nr][nc]==check){
                    q.push({nr,nc});
                    visited[nr][nc]=-1;
                    ans[nr][nc]=color;
                }
            }
        }
        return ans;
    }
};