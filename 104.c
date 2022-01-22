/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a , int b){
    if(a >= b)
        return a;
    else
        return b;
}

int maxD(struct TreeNode* root){
    if(root == NULL)
        return 0;
    return 1 + max(maxD(root->left),maxD(root->right));
}

int maxDepth(struct TreeNode* root){
    return maxD(root);
}