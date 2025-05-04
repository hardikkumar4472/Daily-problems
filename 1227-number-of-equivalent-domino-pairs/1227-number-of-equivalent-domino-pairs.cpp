class Solution {
public:
    long long cantor_pair(int a, int b) {
        int x = min(a, b), y = max(a, b);
        long long sum = x + y;
        return (sum * (sum + 1)) / 2 + y;
    }

    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        unordered_map<long long, int> freq;
        for (auto& dom : dominoes) {
            long long pairValue = cantor_pair(dom[0], dom[1]);
            count += freq[pairValue];
            freq[pairValue]++;
        }
        return count;
    }
};