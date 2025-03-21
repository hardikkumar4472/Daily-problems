#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> graph; 
        unordered_map<string, int> indegree; 
        unordered_set<string> available(supplies.begin(), supplies.end());
        vector<string> result;

        for (int i = 0; i < recipes.size(); i++) {
            string recipe = recipes[i];
            indegree[recipe] = ingredients[i].size();

            for (string& ing : ingredients[i]) {
                graph[ing].push_back(recipe);
            }
        }
        queue<string> q(supplies.begin(), supplies.end());

        while (!q.empty()) {
            string item = q.front();
            q.pop();
            if (!graph.count(item)) continue;

            for (string& recipe : graph[item]) {
                indegree[recipe]--;
                if (indegree[recipe] == 0) {
                    result.push_back(recipe);
                    q.push(recipe);
                }
            }
        }

        return result;
    }
};