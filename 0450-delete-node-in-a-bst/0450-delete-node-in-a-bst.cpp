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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL){
            return NULL;
        }
        if (key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if (key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            if (root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            else if (root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if (root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            else {
                TreeNode* pred = root->left;
                while (pred->right) {
                    pred = pred->right;
                }
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        }
        return root;
    }
};