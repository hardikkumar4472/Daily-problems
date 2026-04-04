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
    vector<int> largestValues(TreeNode* root) {
        vector<vector<int>> vec;
        vector<int> ans;
        if (root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int s=q.size();
            for (int i=0;i<s;i++){
                TreeNode* take=q.front();
                q.pop();
                temp.push_back(take->val);
                if (take->left){
                    q.push(take->left);
                }
                if (take->right){
                    q.push(take->right);
                }
            }
            sort(temp.rbegin(),temp.rend());
            vec.push_back(temp);
        }
        for (int i=0;i<vec.size();i++){
            ans.push_back(vec[i][0]);
        }
        return ans;
        
    }
};