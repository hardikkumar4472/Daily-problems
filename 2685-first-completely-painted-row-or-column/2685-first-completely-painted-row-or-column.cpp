class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        pair<int, int> map[arr.size() + 1];
        for (int r = 0; r < m; r++){
            for (int c = 0; c < n; c++){
                map[mat[r][c]] = {r, c + 1};
                mat[r][c] = 0;
            }
        }
        mat[0].push_back(0);
        for (int i = 0; i < arr.size(); i++){
            auto& [r, c] = map[arr[i]];
            if (++mat[r][0] == n || ++mat[0][c] == m)
                return i;
        }
        return -1;
    }
};