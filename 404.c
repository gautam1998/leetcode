/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum2 = 0;

int sumOfLeftLeaves2(struct TreeNode* root){
    
    
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 0;
    
    if(root->left == NULL && root->right != NULL){
        sumOfLeftLeaves2(root->right);
        return 0;
    }
    
    if(root->left->left == NULL && root->left->right == NULL){
        printf("%d\n",root->left->val);
        sum2 = sum2 + root->left->val;
        sumOfLeftLeaves2(root->right);
        return 0;
    }
    
    sumOfLeftLeaves2(root->right);
    sumOfLeftLeaves2(root->left);
    return 0;
    
}

int sumOfLeftLeaves(struct TreeNode* root){
    
    sumOfLeftLeaves2(root);
    
    int sum = sum2;
    sum2 = 0;
    return sum;
}