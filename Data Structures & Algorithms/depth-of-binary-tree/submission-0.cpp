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
    int d= 1+ max(depth(root->left), depth(root->right));
    return d;
}
public:
    int maxDepth(TreeNode* root) {
        int ans=depth(root);
        return ans;
    }
};
