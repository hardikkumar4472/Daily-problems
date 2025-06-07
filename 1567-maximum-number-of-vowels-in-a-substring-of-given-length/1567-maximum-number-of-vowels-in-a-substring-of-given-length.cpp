class Solution {
public:
    bool isVowel(char character) {
        if (character == 'a' || character == 'e' || character == 'i' ||
            character == 'o' || character == 'u') {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int ct = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])){
                ct++;
            }
        }
        int max_vowels=ct;
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i])){
                ct++;
            }
            if (isVowel(s[i-k])){
                ct--;
            }
            max_vowels=max(max_vowels,ct);
        }
        return max_vowels;
    }
};