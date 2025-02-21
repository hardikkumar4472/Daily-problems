class FindElements {
public:
    TreeNode* newRoot;
    unordered_set<int> present;
    
    void dfs(TreeNode* root, int parentVal, bool left) {
        if (root == nullptr) return;
        
        root->val = left ? (2 * parentVal + 1) : (2 * parentVal + 2);
        present.insert(root->val);
        
        dfs(root->left, root->val, true);
        dfs(root->right, root->val, false);
    }
    
    FindElements(TreeNode* root) {
        root->val = 0;
        present.insert(0);
        dfs(root->left, 0, true);
        dfs(root->right, 0, false);
    }
    
    bool find(int target) {
        return present.count(target);
    }
};