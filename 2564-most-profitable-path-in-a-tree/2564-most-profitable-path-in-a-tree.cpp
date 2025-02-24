#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        vector<vector<int>> graph(n);
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<int> bobPath(n, -1);
        vector<int> path;
        fillBobPath(bob, -1, path, graph);
        for (int i = 0; i < path.size(); i++) {
            bobPath[path[i]] = i;
        }

        return getAliceMaxScore(0, -1, 0, bobPath, graph, 0, amount);
    }

private:
    bool fillBobPath(int node, int parent, vector<int>& path, vector<vector<int>>& graph) {
        if (node == 0) return true;
        for (int neighbor : graph[node]) {
            if (neighbor != parent) {
                path.push_back(node);
                if (fillBobPath(neighbor, node, path, graph)) return true;
                path.pop_back();
            }
        }
        return false;
    }

    int getAliceMaxScore(int node, int parent, int currScore, vector<int>& bobPath, vector<vector<int>>& graph, int timestamp, vector<int>& amount) {
        if (bobPath[node] == -1 || bobPath[node] > timestamp) {
            currScore += amount[node];
        } else if (bobPath[node] == timestamp) {
            currScore += amount[node] / 2;
        }

        if (graph[node].size() == 1 && node != 0) return currScore;
        int maxScore = INT_MIN;
        for (int neighbor : graph[node]) {
            if (neighbor != parent) {
                maxScore = max(maxScore, getAliceMaxScore(neighbor, node, currScore, bobPath, graph, timestamp + 1, amount));
            }
        }
        return maxScore;
    }
};