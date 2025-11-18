class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        vector<string> vecc;
        for(auto i:nums){
            vecc.push_back(to_string(i));
        }
        vector<vector<int>> stor(10,vector<int>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<vecc.size();j++){
                if(i<vecc[j].size())stor[i][vecc[j][i]-'0']++;
            }
        }
        long long anss=0;
        for(int i=0;i<10;i++){
            for(int k=0;k<10;k++){
                long long count=0;
                for(int l=0;l<10;l++){
                    if(k==l)continue;
                    count+=stor[i][l];            
                }
                anss+=stor[i][k]*count;
            }
        }
        return anss/2;
    }
};