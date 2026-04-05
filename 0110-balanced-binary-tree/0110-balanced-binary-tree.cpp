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
    int temp(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        int leftht=temp(root->left);
        int rightht=temp(root->right);
        if (leftht==-1 || rightht==-1){
            return -1;
        }
        if (abs(leftht-rightht)>1){
            return -1;
        }
        return max(leftht,rightht)+1;

    }
    bool isBalanced(TreeNode* root) {
        return temp(root)!=-1;
        
    }
};