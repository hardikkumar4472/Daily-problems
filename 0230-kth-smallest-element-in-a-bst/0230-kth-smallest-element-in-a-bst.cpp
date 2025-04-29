/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(vector<int> &vec, TreeNode* root){
        if (root==NULL){
            return;
        }
        inorder(vec,root->left);
        vec.push_back(root->val);
        inorder(vec,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        inorder(res,root);
        return res[k-1];
    }
};