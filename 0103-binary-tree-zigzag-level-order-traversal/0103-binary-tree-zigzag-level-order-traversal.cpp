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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if (root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int queue_size=q.size();
            vector<int> temp2;
            for (int i=0;i<queue_size;i++){
                TreeNode* temp=q.front();
                q.pop();
                temp2.push_back(temp->val);
                if (temp->left){
                    q.push(temp->left);
                }
                if (temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(temp2);
        }
        int j=0;
        while(j!=ans.size()){
            if (j%2!=0){
                reverse(ans[j].begin(),ans[j].end());
            }
            j++;
        }
        return ans;
        
    }
};