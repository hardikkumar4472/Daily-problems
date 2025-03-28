
class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int m = grid.size(), n = grid[0].size();
        vector<int> sortedQueries = queries;
        sort(sortedQueries.begin(), sortedQueries.end());
        unordered_map<int, int> queryResult;
        vector<int> answer(queries.size());

        vector<vector<int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
        unordered_set<string> visited;

        minHeap.push({grid[0][0], 0, 0});
        visited.insert("0,0");

        int points = 0;

        for (int query : sortedQueries) {
            while (!minHeap.empty() && minHeap.top()[0] < query) {
                vector<int> cell = minHeap.top();
                minHeap.pop();
                int val = cell[0], r = cell[1], c = cell[2];

                points++;

                for (auto& dir : directions) {
                    int nr = r + dir[0], nc = c + dir[1];
                    string key = to_string(nr) + "," + to_string(nc);

                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited.count(key)) {
                        visited.insert(key);
                        minHeap.push({grid[nr][nc], nr, nc});
                    }
                }
            }
            queryResult[query] = points;
        }

        for (int i = 0; i < queries.size(); i++) {
            answer[i] = queryResult[queries[i]];
        }

        return answer;
    }
};