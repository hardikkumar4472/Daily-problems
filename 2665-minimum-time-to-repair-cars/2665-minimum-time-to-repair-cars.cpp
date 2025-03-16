class Solution {
public:
    bool timeIsSuff(vector<int>& ranks, int cars, long long minGiven) {
        long long carsDone = 0;
        for (int r : ranks) {
            long long c2 = minGiven / r;
            long long c = floor(sqrt(c2));
            carsDone += c;
        }
        return carsDone >= cars;
    }
    
    long long repairCars(vector<int>& ranks, int cars) {
        long long l = 1, r = 1e14;
        while (l < r) {
            long long mid = (l + r) / 2;
            if (timeIsSuff(ranks, cars, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};