class Solution {
    int ans = 0;

public:
    int help(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int l = help(root->left);
        int r = help(root->right);

        ans = max(ans, l + r);

        return max(l, r) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        help(root);
        return ans;
    }
};