class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        vector<vector<int>> dirs = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
        vector<vector<int>> result = image;
        int m = image.size();
        int n = image[0].size();
        int check = image[sr][sc];
        queue<pair<int, int>> q;
        q.push({sr, sc});
        result[sr][sc] = color; 
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < dirs.size(); i++) {
                int nr = r + dirs[i][0]; 
                int nc = c + dirs[i][1]; 
                if (nr >= 0 && nc >= 0 && nr < m && nc < n && result[nr][nc] == check) {
                    result[nr][nc] = color; 
                    q.push({nr, nc});       
                }
            }
        }
        return result;
    }
};