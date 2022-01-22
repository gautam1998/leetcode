/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a , int b){
    if(a > b)
        return a;
    return b;
}

int depth(struct TreeNode* root){
    
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;
    
    return 1 + max(depth(root->right),depth(root->left));
    
    
}

int diameterOfBinaryTree(struct TreeNode* root){
    
    if(root== NULL)
        return 0;
    
    int sum = depth(root->left) + depth(root->right);
    
    int ldia = diameterOfBinaryTree(root->left);
    int rdia = diameterOfBinaryTree(root->right);
    
    int max1 = max(ldia,rdia);
    
    return max(sum,max1);
}