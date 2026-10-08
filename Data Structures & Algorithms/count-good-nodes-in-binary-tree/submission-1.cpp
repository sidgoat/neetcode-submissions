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
int cnt=0;
void help(TreeNode* root, int m){
    if(root==nullptr){
        return;
    }
    if(m<=root->val){
        cnt++;
    }
    m=max(root->val, m);
    help(root->left, m);
    help(root->right, m);
}
    int goodNodes(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int m= root->val;
        help(root, m);
        return cnt;
    }
};
