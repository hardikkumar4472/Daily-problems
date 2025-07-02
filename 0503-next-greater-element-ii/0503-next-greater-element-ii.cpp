class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        vector<int> circ;
        for (int i = 0; i < nums.size(); i++) {
            circ.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            circ.push_back(nums[i]);
        }

        int n = circ.size();

        int i = 0;
        int j = 1;

        while (i < nums.size()) {
            while (j < n && j - i < nums.size()) {
                if (circ[j] > circ[i]) {
                    res.push_back(circ[j]);
                    break;
                }
                j++;
            }

            if (j - i >= nums.size()) {
                res.push_back(-1);
            }

            i++;
            j = i + 1;
        }

        return res;
    }
};
