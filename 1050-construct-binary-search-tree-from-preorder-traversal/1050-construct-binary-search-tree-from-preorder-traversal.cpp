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
    TreeNode* helper(vector<int>& preorder, int &i, int &upper){
          if (i>=preorder.size() || preorder[i]>=upper) return NULL;

          TreeNode* root = new TreeNode(preorder[i]);
          i++;

          root->left= helper(preorder, i , root->val);
          root->right= helper(preorder, i, upper);

          return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        int upper= INT_MAX;
        return helper(preorder, i , upper);
    }
};