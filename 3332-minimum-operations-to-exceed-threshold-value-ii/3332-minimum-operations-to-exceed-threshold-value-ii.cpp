class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        sort(a.begin(), a.end());
        vector<int> b;
        for (int i = 0, j = 0, count = 0, x, y; ; ++count) {
            if (i < a.size() && (j >= b.size() || a[i] <= b[j])) x = a[i++];
            else x = b[j++];
            if (x >= k) return count;
            if (i < a.size() && (j >= b.size() || a[i] <= b[j])) y = a[i++];
            else y = b[j++];
            long t = 2L * x + y;
            b.push_back(t < k ? (int)t : k);
        }
        return -1;
    }
};