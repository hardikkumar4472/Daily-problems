class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> vec;
        int ct=0;
        for (int i=0;i<s1.size();i++){
            if (s1[i]!=s2[i]){
                ct++;
                vec.push_back(i);
            }
        }
        if (ct==0){
            return true;
        }
        else if (ct!=2){
            return false;
        }
        else if (s1[vec[0]]==s2[vec[1]] && s2[vec[0]]==s1[vec[1]]){
            return true;
        }
        return false;
    }
};