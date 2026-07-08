class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ans=true;
        map<int, int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        map<int, int> temp;
        for(auto i: freq){
            temp[i.second]++;
        }
        for(auto i: temp){
            if(i.second>1){
                ans=false;
            }
        }
        return ans;
    }
};