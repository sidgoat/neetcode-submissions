class Solution {
public:
    bool ans = false;

    bool ch(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr) {
            return true;
        }

        if(root == nullptr || subRoot == nullptr) {
            return false;
        }

        if(root->val != subRoot->val) {
            return false;
        }

        return ch(root->left, subRoot->left) &&
               ch(root->right, subRoot->right);
    }

    bool check(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr) {
            return false;
        }

        if(root->val == subRoot->val) {
            ans = ch(root, subRoot);

            if(ans == true) {
                return true;
            }
        }

        return check(root->left, subRoot) ||
               check(root->right, subRoot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr) {
            return true;
        }

        if(root == nullptr) {
            return false;
        }

        return check(root, subRoot);
    }
};