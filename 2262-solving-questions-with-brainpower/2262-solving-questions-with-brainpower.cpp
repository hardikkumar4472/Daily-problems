class Solution {
public:
    static long mostPoints(vector<vector<int>>& q) {
        const int n = q.size();
        long* d = (long*)alloca((n + 1) * sizeof(long));
        d[n] = 0;
        for (int i = n - 1; i >= 0; --i)
            d[i] = max(q[i][0] + d[min(1 + i + q[i][1], n)], d[1 + i]);
        return d[0];
    }
};