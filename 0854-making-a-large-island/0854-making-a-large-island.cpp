class UnionFind {
public: 
    vector<int>par,size;
    UnionFind(int n): par(n), size(n,1){
        iota(par.begin(),par.end(),0);
    }
    int find(int node){
        return node == par[node] ? node : find(par[node]);
    }
    void doUnion(int node1, int node2){
        int par1 = find(node1);
        int par2 = find(node2);
        if(par1==par2)return ;
        par[par2]=par1;
        size[par1]+=size[par2];
    }
};
class Solution {
public:
    vector<int> directionX = {1,-1,0,0};
    vector<int> directionY = {0,0, 1,-1};
    int largestIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        UnionFind *unionFind = new UnionFind(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    for(int k=0;k<4;k++){
                        int nr = i + directionX[k];
                        int nc = j + directionY[k];
                        if(nr<0||nc<0||nr>=n||nc>=n||grid[nr][nc]==0)continue;
                        int currentNode= i * n + j;
                        int neighbour = nr * n + nc; 
                        unionFind->doUnion(currentNode,neighbour);
                    }
                }
                
            }
        }
        int maxValue=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)continue;
                set<int>parents;
                for(int k=0;k<4;k++){
                    int nr = i + directionX[k];
                    int nc = j + directionY[k];
                    if(nr<0||nc<0||nr>=n||nc>=n||grid[nr][nc]==0)continue;
                    int neighbour = nr * n + nc; 
                    parents.insert(unionFind->find(neighbour));
                }
                int currSize = 1;
                for(auto par: parents){
                    currSize+=unionFind->size[par];
                }
                maxValue = max(maxValue ,currSize);
            }
        }
        return maxValue == 0 ? n*n : maxValue;
        
    }
};