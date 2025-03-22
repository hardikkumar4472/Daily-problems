class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> parent(n), rank(n, 0);
        iota(parent.begin(), parent.end(), 0);
        
        function<int(int)> find = [&](int x) {
            if (parent[x] != x) {
                parent[x] = find(parent[x]);
            }
            return parent[x];
        };
        
        auto unionSets = [&](int x, int y) {
            int rootX = find(x);
            int rootY = find(y);
            if (rootX == rootY) return;
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        };
        
        for (auto& edge : edges) {
            unionSets(edge[0], edge[1]);
        }
        
        unordered_map<int, unordered_set<int>> componentVertices;
        unordered_map<int, int> componentEdges;
        
        for (int i = 0; i < n; ++i) {
            int root = find(i);
            componentVertices[root].insert(i);
        }
        
        for (auto& edge : edges) {
            int root = find(edge[0]);
            componentEdges[root]++;
        }
        
        int completeCount = 0;
        for (auto& [root, vertices] : componentVertices) {
            int numVertices = vertices.size();
            int expectedEdges = numVertices * (numVertices - 1) / 2;
            if (componentEdges[root] == expectedEdges) {
                completeCount++;
            }
        }
        
        return completeCount;
    }
};