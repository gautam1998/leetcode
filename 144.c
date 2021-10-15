/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int res[100];
int i = -1;

void preorder(struct TreeNode* root);

int* preorderTraversal(struct TreeNode* root, int* returnSize){
 if(root == NULL){
     *returnSize = 0;
     return res;
 }
    
 
 preorder(root);
 *returnSize = i+1;
 i = -1;
 return res;
}

void preorder(struct TreeNode* root){
    
    if(root == NULL){
        return ;
    }
    
    printf("%d",root->val);
    
    res[++i] = root->val;
    
    preorder(root->left);
    
    preorder(root->right);
    
   
    
    
}