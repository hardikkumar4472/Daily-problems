class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& vis){
        vis[node]=true;
        int n=isConnected.size();
        for (int i=0;i<n;i++){
            if(!vis[i] && isConnected[node][i]==1){
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(),false);
        int provinces=0;
        for (int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                dfs(i,isConnected,vis);
                provinces++;
            }
        }
        return provinces;

    }
};