class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int sum=0;
        for (int i=0;i<cost.size();i++){
            sum+=cost[i];
        }
        if (cost.size()<3){
            return sum;
        }
        else{
            int temp=2;
            while(temp<cost.size()){
                sum-=cost[temp];
                temp+=3;
            }
        }
        return sum;
    }
};