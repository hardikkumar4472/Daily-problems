int counts[256];
int prefix[256];
class Solution {
    static void radixSort(int* a, const int n) noexcept {
        if (n < 2) return;
        int* buffer = a;
        int* output = (int*)alloca(n * sizeof(int));
        for (int pass = 0; pass < 4; ++pass) {
            const int shift = pass * 8;
            memset(counts, 0, 1024);
            for (int i = 0; i < n; ++i) 
                ++counts[(buffer[i] >> shift) & 0xFF];
            prefix[0] = 0;
            for (int i = 1; i < 256; ++i)
                prefix[i] = prefix[i - 1] + counts[i - 1];
            for (int i = 0; i < n; ++i) {
                const int val = buffer[i];
                const int b = (val >> shift) & 0xFF;
                output[prefix[b]++] = val;
            }
            int* const temp = buffer;
            buffer = output;
            output = temp;
        }
    }

public:
    static long putMarbles(const vector<int>& a, const int k) noexcept {
        const int n = a.size();
        if (k == 1 || k == n) return 0;
        int* c = (int*)alloca((n - 1) * sizeof(int));
        for (int i = 0; i < n - 1; ++i)
            c[i] = a[i] + a[i + 1];
        radixSort(c, n - 1);
        long d = 0;
        for (int i = 0; i < k - 1; ++i)
            d += c[n - i - 2] - c[i];
        return d;
    }
};