class Solution {
public:
    int nextGreaterElement(int n) {
        string str=to_string(n);
        if (!next_permutation(str.begin(),str.end())){
            return -1;
        }
        long long s=stoll(str);
        if (s>INT_MAX){
            return -1;
        }
        return s;
    }
};