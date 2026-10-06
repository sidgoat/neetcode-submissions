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
private:
int depth(TreeNode* root){
    if(root==nullptr){
        return 0;
    }
    int d= 1+max(depth(root->left), depth(root->right));
    return d;
}
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        int x= abs(depth(root->left)-depth(root->right));
        if(x>1){
            return false;
        }
        return isBalanced(root->left)&& isBalanced(root->right);
    }
};
