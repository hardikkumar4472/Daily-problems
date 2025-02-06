class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> multiCnt;
        int n=nums.size(), tupleCnt=0;
        for(int i=0; i+1<n; ++i)
            for(int j=i+1; j<n; ++j)
                ++multiCnt[nums[i]*nums[j]];
        for(auto& [multi,cnt] : multiCnt)
            tupleCnt += (cnt-1)*cnt/2;
        
        return tupleCnt*8;
    }
};