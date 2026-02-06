class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nums2;
        for (int i = 0; i < nums.size(); i++) {
            nums2.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            nums2.push_back(nums[i]);
        }
        vector<int> ans(nums2.size(), -1);
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }
            if (!s.empty()) {
                ans[i] = s.top();
            }
            s.push(nums2[i]);
        }
        vector<int> ans2;
        for (int i=0;i<ans.size()/2;i++){
            ans2.push_back(ans[i]);
        }
        return ans2;
    }
};