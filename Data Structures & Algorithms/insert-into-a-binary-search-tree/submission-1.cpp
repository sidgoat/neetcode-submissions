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
TreeNode* help(TreeNode* root, int val, TreeNode* node){
    if(root->right==nullptr && root->left==nullptr){
        if(val>root->val){
        TreeNode* n= new TreeNode(val);
        root->right=n;
        return node;
    }
    else{
        TreeNode* n= new TreeNode(val);
        root->left=n;
        return node;
    }
    }
    if(root->right==nullptr && root->val<val){
        TreeNode* n= new TreeNode(val);
        root->right=n;
        return node;
    }
     if(root->left==nullptr && root->val>val){
        TreeNode* n= new TreeNode(val);
        root->left=n;
        return node;
    }
    if(val>root->val){
        root=root->right;
    }
    else{
        root=root->left;
    }
    return help(root, val, node);
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            TreeNode* ne= new TreeNode(val);
            return ne;
        }
        TreeNode* node= root;
        return help(root, val, node);
    }
};