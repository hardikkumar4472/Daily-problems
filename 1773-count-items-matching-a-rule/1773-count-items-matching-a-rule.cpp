class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int temp=-1;
        int ans=0;
        if (ruleKey=="color"){
            temp=1;
        }
        else if (ruleKey=="type"){
            temp=0;
        }
        else {
            temp=2;
        }
        for (int i=0;i<items.size();i++){
            if (items[i][temp]==ruleValue){
                ans++;
            }
        }
        return ans;
    }
};