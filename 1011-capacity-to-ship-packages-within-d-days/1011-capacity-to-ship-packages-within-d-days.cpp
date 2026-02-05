class Solution {
public:
    bool check(vector<int>& weights, int days, int cap) {
        int cd = 1;
        int sum = 0;

        for (int w : weights) {
            if (sum + w <= cap) {
                sum += w;
            } else {
                cd++;
                sum = w;
            }
        }
        return cd <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = 0;
        for (int w : weights) right += w;

        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (check(weights, days, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
