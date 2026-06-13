class Solution {
public:
    int findCount(string s, vector<int>& weights) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            ans += weights[s[i] - 'a'];
        }
        return ans % 26;
    }

    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string anss = "";
        vector<char> temp = {
            'z','y','x','w','v','u','t','s','r','q','p','o','n',
            'm','l','k','j','i','h','g','f','e','d','c','b','a'
        };
        for (int i = 0; i < words.size(); i++) {
            int tempp = findCount(words[i], weights);
            anss += temp[tempp];
        }
        return anss;
    }
};