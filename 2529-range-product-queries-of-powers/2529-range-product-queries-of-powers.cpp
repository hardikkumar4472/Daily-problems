class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        auto modPow = [&](long long base, long long exp, long long mod) {
            long long result = 1;
            while (exp > 0) {
                if (exp & 1) result = (result * base) % mod;
                base = (base * base) % mod;
                exp >>= 1;
            }
            return result;
        };
        
        return [&, MOD = 1000000007, modPow](vector<int> a) {
            vector<int> res;
            for (auto &qr : queries)
                res.push_back((int)modPow(2, a[qr[1] + 1] - a[qr[0]], MOD));
            return res;
        }(
            ([&]() {
                vector<int> p = {0};
                for (int i = 0; i < 31; i++)
                    if (n >> i & 1)
                        p.push_back(p.back() + i);
                return p;
            })()
        );
    }
};
