class Solution {
public:
    bool dfs(vector<vector<int>>& adj, int source, int destination, vector<bool>& vis) {
        
        if (source == destination) {
            return true;
        }

        vis[source] = true;

        for (int i = 0; i < adj[source].size(); i++) {
            int neighbor = adj[source][i];

            if (!vis[neighbor]) {
                if (dfs(adj, neighbor, destination, vis)) {
                    return true;
                }
            }
        }

        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

        //Adjacency List
        for (int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
            //BFS
        //     queue<int> q;
        //     vector<bool> vis(n,false);
        //     q.push(source);
        //     vis[source]=true;
        //     while(!q.empty()){
        //         int front=q.front();
        //         q.pop();
        //         if(front==destination){
        //             return true;
        //         }
        //         for (int i=0;i<adj[front].size();i++){
        //             int nei=adj[front][i];
        //             if(!vis[nei]){
        //                 q.push(nei);
        //                 vis[nei]=true;
        //             }
        //         }
        // }
        // return false; 
        vector<bool> vis(n, false);
        return dfs(adj, source, destination, vis);


    }
};