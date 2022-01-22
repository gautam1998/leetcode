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
    return b; 
}

int height(struct TreeNode* root){
    if(root == NULL)
        return 0;
    return 1 + max(height(root->left),height(root->right));
}
bool isBalancedRecur(struct TreeNode* root){
    if(root == NULL)
        return true;
    
    int hl = height(root->left);
    int hr = height(root->right);
    
    printf("%d",hl);
    printf("%d\n",hr);
    
    if((abs(hl-hr) <= 1) && isBalancedRecur(root->left) && isBalancedRecur(root->right))
        return true;
        
    return false;
}
    
bool isBalanced(struct TreeNode* root){
    return isBalancedRecur(root);
}