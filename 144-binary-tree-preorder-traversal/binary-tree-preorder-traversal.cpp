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
    void preo(TreeNode* node, vector<int>& ans) /// using recursion
    {
        if (node == NULL)
            return;

        ans.push_back(node->val);
        preo(node->left, ans);
        preo(node->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {

        //  vector<int>ans;
        //  preo(root,ans);
        //     return ans;

        stack<TreeNode*> st;
        vector<int> ans;
        if (root == NULL)
            return ans;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            ans.push_back(node->val);
            if (node->right != NULL)
                st.push(node->right);
            if (node->left != NULL)
                st.push(node->left);
        }

        return ans;
    }
};