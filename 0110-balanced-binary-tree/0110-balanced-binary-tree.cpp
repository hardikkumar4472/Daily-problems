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
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
    int height(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        int leftHt=height(root->left);
        if (leftHt==-1){
            return -1;
        }
        int rightHt=height(root->right);
        if (rightHt==-1){
            return -1;
        }
        if (abs(leftHt-rightHt)>1){
            return -1;
        }
    return max(leftHt,rightHt)+1;
    }
};