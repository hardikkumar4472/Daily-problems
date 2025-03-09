class Solution {
    bool isValid(vector<int>& v, int mid, int t) {
        int ct = 0;
        for (auto it : v) {
            ct += (it / mid);
            if (it % mid) ct++;
            if (ct > t) return false;
        }
        return true;
    }

public:
    int smallestDivisor(vector<int>& v, int t) {
        int l = 1, r = *max_element(v.begin(), v.end());
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (isValid(v, mid, t)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};