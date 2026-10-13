class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;

        solve(root->left, ans);    // Left
        solve(root->right, ans);   // Right
        ans.push_back(root->val);  // Root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};