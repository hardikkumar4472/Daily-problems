/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    double returnAvg(vector<int>& arr) {
        long long int temp = 0;
        for (int i = 0; i < arr.size(); i++) {
            temp += arr[i];
        }
        return (double)temp / arr.size();
    }

    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (root == NULL) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            vector<int> temp;
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* take = q.front();
                q.pop();

                temp.push_back(take->val);

                if (take->left)
                    q.push(take->left);
                if (take->right)
                    q.push(take->right);
            }

            ans.push_back(returnAvg(temp));
        }

        return ans;
    }
};