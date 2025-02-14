class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int i = 0;
        int j = n-1;
        int capA = capacityA;
        int capB = capacityB;
        int cnt = 0;
        while(i < j){
            capA -= plants[i];
            capB -= plants[j];

            if(capA < 0){
                cnt++;
                capA = capacityA - plants[i];
            } 
            if(capB < 0){
                capB = capacityB - plants[j];
                cnt++;
            }

            i++;
            j--;
        }

        if(i == j){
            capA = max(capA,capB);
            if(capA < plants[i]) cnt++;
        }
        return cnt;
    }
};