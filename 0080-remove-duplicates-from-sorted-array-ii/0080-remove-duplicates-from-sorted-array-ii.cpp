class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        vector<int> vec;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for (auto i:mp){
            if (i.second==1){
                vec.push_back(i.first);
            }
            else{
                vec.push_back(i.first);
                vec.push_back(i.first);
            }
        }
        while(nums.size()!=0){
            nums.pop_back();
        }
        for (int i=0;i<vec.size();i++){
            nums.push_back(vec[i]);
        }
        return vec.size();
    }
};