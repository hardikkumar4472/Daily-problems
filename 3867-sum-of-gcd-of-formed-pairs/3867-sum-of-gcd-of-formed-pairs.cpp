class Solution {
public:
    int gcdd(int a, int b) {
        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> maxi;
        int mx = nums[0];
        maxi.push_back(mx);
        for (int i = 1; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            maxi.push_back(mx);
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(gcdd(nums[i], maxi[i]));   
        }
        sort(ans.begin(), ans.end());
        long long fin = 0;
        int i = 0, j = ans.size() - 1;
        while (i < j) {
            fin += gcdd(ans[i], ans[j]);
            i++;
            j--;
        }

        return fin;
    }
};