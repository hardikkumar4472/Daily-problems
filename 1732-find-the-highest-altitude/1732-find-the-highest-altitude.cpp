class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp=0;
        int ans=INT_MIN;
        for (int i=0;i<gain.size();i++){
            temp+=gain[i];
            ans=max(ans,temp);
        }
        if (ans<0){
            return 0;
        }
        return ans;
    }
};