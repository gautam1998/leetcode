/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if(root == NULL)
        return root;
    
    struct TreeNode* tempR = root->right;
    struct TreeNode* tempL = root->left;
    
    root->right = tempL;
    root->left = tempR;
    
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}