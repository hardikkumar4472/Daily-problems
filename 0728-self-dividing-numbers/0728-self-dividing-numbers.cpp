class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool isSelfDividing = true;
            while (num) {
                int digit = num % 10;
                if (digit == 0 || i % digit) {
                    isSelfDividing = false;
                    break;
                }
                num /= 10;
            }
            if (isSelfDividing) result.push_back(i);
        }
        return result;
    }
};