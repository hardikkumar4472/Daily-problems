class Solution {
public:
    int find(vector<int> &parent,int x){
    
    if(parent[x]==x){
        return x;
    }
   
    return parent[x]=find(parent,parent[x]);
}

bool Union(vector<int>&parent,vector<int>&size,int a,int b){
    int pa=find(parent,a);
    int pb=find(parent,b);
    if(pa==pb){
        return true;
    }
    if(size[pa]>=size[pb]){
      
        size[pa]+=size[pb];
        parent[pb]=pa;
       
    }
    else{
       
        size[pb]+=size[pa];
        parent[pa]=pb;
        

    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> parent(n+1); 

vector<int> size(n+1,1);
for(int i=0;i<=n;i++){
    parent[i]=i;
   
}
for(int i=0;i<n;i++){
    if(Union(parent,size,edges[i][0],edges[i][1])){
        return {edges[i][0],edges[i][1]};
    }
}
return {};
    }
};