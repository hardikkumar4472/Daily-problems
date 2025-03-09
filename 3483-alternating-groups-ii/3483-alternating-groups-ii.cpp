class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        if (k>n)
            return 0;
        int c=0;
        int res=0;
        for (int i=1; i<n+k; i++) {
            if (colors[(i-1)%n] != colors[i%n]) {
                c++;
            } else {
                c=1;
            }
            if (c>=k) {
                res++;
            }
        }
        return res;
    }
};