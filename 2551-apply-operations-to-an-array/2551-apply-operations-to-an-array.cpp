class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> vecc;
        int ct=vecc.size();
        vector<int> vec(nums);
        for (int i=0;i<vec.size()-1;i++){
            if (vec[i]==vec[i+1]){
                vec[i]=vec[i]*2;
                vec[i+1]=0;
            }
        }
        for (int i=0;i<vec.size();i++){
            if (vec[i]!=0){
                vecc.push_back(vec[i]);
            }
            else if (vec[i]==0){
                ct++;
            }
        }
        for (int i=0;i<ct;i++){
            vecc.push_back(0);
        }
        return vecc;
    }
};