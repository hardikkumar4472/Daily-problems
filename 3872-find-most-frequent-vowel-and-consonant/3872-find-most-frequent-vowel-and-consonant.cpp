class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int maxVowel=0;
        int maxCons=0;
        for (char c : s){
            int i=c-'a';
            freq[i]++;
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                maxVowel=max(maxVowel,freq[i]);
            }
            else{
                maxCons=max(maxCons,freq[i]);
            }
        }
        return maxVowel+maxCons;
    }
};