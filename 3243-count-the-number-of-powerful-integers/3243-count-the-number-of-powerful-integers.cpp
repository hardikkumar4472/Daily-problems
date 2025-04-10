class Solution {
public:
    using ll = long long;
    ll dp[2][16];
    ll find(int ind, string &num, bool tight, int &limit, string &suffix) {
        if (dp[tight][ind] != -1)return dp[tight][ind];
        ll ub = tight ? num[ind] - '0' : 9;
        ll ans=0;
        if (ind==num.size()-suffix.size()){
            if(!tight)return dp[tight][ind]=1;
            return dp[tight][ind]=(stoll(num.substr(ind,(int)suffix.size()))>=stoll(suffix));
        }
        for (ll dig=0;dig<=(ll)min((ll)limit,(ll)ub);dig++) {
            ans+=find(ind + 1, num, tight & (dig == ub), limit, suffix);
        }
        return dp[tight][ind] = ans;
    }

    ll numberOfPowerfulInt(ll start, ll finish, int limit, string suffix) {
        ll fr = 0;
        string L = to_string(start - 1), R = to_string(finish);
        if (L.size() >= suffix.size()) {
            memset(dp, -1, sizeof(dp));
            fr = find(0, L, true, limit, suffix);
        }
        memset(dp, -1, sizeof(dp));
        ll sc = find(0, R, true, limit, suffix);
        return sc - fr;
    }
};