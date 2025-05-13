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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        height(root,maxi);
        return maxi;
    }

    int height(TreeNode* root1, int &maxi) {
        if (root1 == NULL)
            return 0;

        int lh = height(root1->left,maxi);
        int rh = height(root1->right,maxi);
        maxi = max(maxi, lh + rh);
        return 1 + max(lh, rh);
    }
};