class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if( n==1 && trust.empty()){
            return 1;
        }
        vector<int> indeg(n+1,0);
        vector<int> outdeg(n+1,0);
        for (int i=0;i<trust.size();i++){
            indeg[trust[i][1]]++;
            outdeg[trust[i][0]]++;
        }
        for (int i=0;i<=n;i++){
            if(outdeg[i]==0 && indeg[i]==n-1){
                return i;
            }
        }
        return -1;
        
    }
};