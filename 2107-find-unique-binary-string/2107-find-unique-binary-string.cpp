class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> s(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i = 0; i < (1 << n); i++) { 
            string binary = bitset<16>(i).to_string().substr(16 - n);
            if (!s.count(binary)) {
                return binary;
            }
        }
        return "";
    }
};