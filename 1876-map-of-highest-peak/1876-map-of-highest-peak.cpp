class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int R = isWater.size();
        int C = isWater[0].size();
        vector<vector<int>> height(R, vector<int>(C, R + C));  
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (isWater[i][j] == 1) {
                    height[i][j] = 0;  
                } else {
                    if (i > 0) 
                        height[i][j] = min(height[i][j], height[i - 1][j] + 1); 
                    if (j > 0) 
                        height[i][j] = min(height[i][j], height[i][j - 1] + 1);   
                }
            }
        }
  
        for (int i = R - 1; i >= 0; i--) {
            for (int j = C - 1; j >= 0; j--) {
                if (i < R - 1) 
                    height[i][j] = min(height[i][j], height[i + 1][j] + 1); 
                if (j < C - 1) 
                    height[i][j] = min(height[i][j], height[i][j + 1] + 1); 
            }
        }

        return height;
    }
};