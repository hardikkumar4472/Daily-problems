class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        auto canAllocate = [&](vector<int>& candies, long long k, int pileSize) {
            if (pileSize == 0) return true;
            long long totalPiles = 0;
            for (int candy : candies) {
                totalPiles += candy / pileSize;
                if (totalPiles >= k) return true;
            }
            return false;
        };
        
        long long sum = 0;
        for (int candy : candies) sum += candy;
        if (sum < k) return 0;

        int low = 1, high = *max_element(candies.begin(), candies.end());
        while (low < high) {
            int mid = (low + high + 1) / 2;
            if (canAllocate(candies, k, mid)) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
