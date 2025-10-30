class Solution {
public:
    class TrieNode {
    public:
        bool endofWord;
        TrieNode* children[26];
        int childCount;
        TrieNode() {
            endofWord = false;
            childCount = 0;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    void insert(TrieNode* root, string word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
                node->childCount++;
            }
            node = node->children[index];
        }
        node->endofWord = true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        TrieNode* root = new TrieNode();
        for (string s : strs) insert(root, s);
        string prefix = "";
        TrieNode* node = root;
        while (node && node->childCount == 1 && !node->endofWord) {
            for (int i = 0; i < 26; i++) {
                if (node->children[i]) {
                    prefix += (char)('a' + i);
                    node = node->children[i];
                    break;
                }
            }
        }
        return prefix;
    }
};
