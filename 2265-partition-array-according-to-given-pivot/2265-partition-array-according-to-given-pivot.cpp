class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lvec;
        vector<int> evec;
        vector<int> gvec;
        vector<int> vec;
        for (int i=0;i<nums.size();i++){
            if (nums[i]<pivot){
                lvec.push_back(nums[i]);
            }
            else if (nums[i]==pivot){
                evec.push_back(nums[i]);
            }
            else{
                gvec.push_back(nums[i]);
            }
        }
        for (int i=0;i<lvec.size();i++){
            vec.push_back(lvec[i]);
        }
        for (int i=0;i<evec.size();i++){
            vec.push_back(evec[i]);
        }
        for (int i=0;i<gvec.size();i++){
            vec.push_back(gvec[i]);
        }
        return vec;
    }

};