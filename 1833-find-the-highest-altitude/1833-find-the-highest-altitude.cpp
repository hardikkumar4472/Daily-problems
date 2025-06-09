class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int st=0;
        int curr=st;
        for (int i=0;i<gain.size();i++){
            st=st+gain[i];
            curr=max(curr,st);
        }
        return curr;
    }
};