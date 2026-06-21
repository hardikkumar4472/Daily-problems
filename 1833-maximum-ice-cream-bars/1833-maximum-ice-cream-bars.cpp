class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0;
        sort(costs.begin(),costs.end());
        for (int i=0;i<costs.size();i++){
            if(coins<costs[i]){
                return ans;;
            }
            coins-=costs[i];
            ans++;
        }
        return ans;
    }
};