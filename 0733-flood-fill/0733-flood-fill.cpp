class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        vector<vector<int>> vec;
        vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(),false));
        vec=image;
        vec[sr][sc]=color;
        vis[sr][sc]=true;
        vector<vector<int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};
        queue<pair<int, int>> q;
        q.push({sr,sc});
        int check=image[sr][sc];
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for (int i=0;i<dirs.size();i++){
                int nr=r+dirs[i][0];
                int nc=c+dirs[i][1];
                if(nr>=0 && nc>=0 && nr<image.size() && nc<image[0].size() && image[nr][nc]==check && !vis[nr][nc] ){
                    vec[nr][nc]=color;
                    vis[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return vec;
    }
};