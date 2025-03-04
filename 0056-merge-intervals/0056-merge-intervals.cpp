class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int k=0;
        for (int i=1;i<intervals.size();i++){
            if (intervals[k][1]>=intervals[i][0]){
                intervals[k][1]=max(intervals[k][1],intervals[i][1]);
            }else{
                k++;
                intervals[k]=intervals[i];
            }
        }
        intervals.resize(k+1);
        return intervals;
    }
};