class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp=word;
        int rep=0;
        for (int i=0;i<word.size();i++){
            if (word[i]==ch){
                rep=i;
                break;
            }
        }
        int j=0;
        int k=rep;
        while (j<k){
            swap(word[j],word[k]);
            j++;
            k--;
        }
        return word;
    }
};