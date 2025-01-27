class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=val){
                nums[temp]=nums[i];
                temp++;
            }
        }
        return temp;
    }
};