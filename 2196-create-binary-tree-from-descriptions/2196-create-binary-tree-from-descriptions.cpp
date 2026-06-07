/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_map<int, int> root;

        for (int i = 0; i < descriptions.size(); i++) {

            // Create nodes if they do not exist
            if (mp[descriptions[i][0]] == 0) {
                TreeNode* temp = new TreeNode(descriptions[i][0]);
                mp[descriptions[i][0]] = temp;
            }

            if (mp[descriptions[i][1]] == 0) {
                TreeNode* temp = new TreeNode(descriptions[i][1]);
                mp[descriptions[i][1]] = temp;
            }

            // Connect parent and child
            if (descriptions[i][2] == 1) {
                mp[descriptions[i][0]]->left = mp[descriptions[i][1]];
            } else {
                mp[descriptions[i][0]]->right = mp[descriptions[i][1]];
            }

            // Track root candidates
            if (root[descriptions[i][0]] != -1) {
                root[descriptions[i][0]] = 1;
            }

            root[descriptions[i][1]] = -1;
        }

        int value = 0;

        for (auto &it : root) {
            if (it.second == 1) {
                value = it.first;
                break;
            }
        }

        return mp[value];
    }
};