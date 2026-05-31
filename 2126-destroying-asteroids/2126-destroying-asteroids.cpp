class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());

        long long cur = mass;

        for (int asteroid : asteroids) {
            if (cur < asteroid) {
                return false;
            }
            cur += asteroid;
        }

        return true;
    }
};