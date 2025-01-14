class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> vec1;
        for (int i=0;i<A.size();i++){
            int ct=0;
            for (int j=0;j<=i;j++){
                for (int k=0;k<=i;k++){
                    if (A[j]==B[k]){
                        ct++;
                    }
                }
            }
        vec1.push_back(ct);
        }
        return vec1;
    }
};