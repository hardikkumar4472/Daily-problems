class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
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