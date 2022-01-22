/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool symmetric(struct TreeNode* a , struct TreeNode* b){
    if(a == NULL && b == NULL)
        return true;
    if(a == NULL && b != NULL)
        return false;
    if(a != NULL && b == NULL)
        return false;
    if(a->val != b->val)
        return false;
    return symmetric(a->left,b->right)&&symmetric(a->right,b->left);
}
bool isSymmetric(struct TreeNode* root){
    return symmetric(root->left,root->right);
}



