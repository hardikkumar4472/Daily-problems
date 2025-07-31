class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> result;  
        unordered_set<int> prev, curr;
        for (int num : arr) {
            curr.clear();
            curr.insert(num);
            for (int p : prev) {
                curr.insert(p | num);
            }
            result.insert(curr.begin(), curr.end());
            prev = curr;
        }
        return result.size();
    }
};
