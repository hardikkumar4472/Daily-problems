class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for (int n : nums) {
            vector<int> temp;
            while (n > 0) {
                temp.push_back(n % 10);
                n /= 10;
            }
            for (int i = temp.size() - 1; i >= 0; i--) {
                res.push_back(temp[i]);
            }
        }
        return res;
    }
};