/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void mergeTrees2(struct TreeNode** root1P, struct TreeNode** root2P){
    
    struct TreeNode* root1 = *root1P;
    struct TreeNode* root2 = *root2P;
    
        
    if(root1 && root2){
        root1->val = root1->val + root2->val;
        printf("%d\n",root1->val);
    }
    
    if(root1->left && root2->left)
        mergeTrees2(&root1->left,&root2->left);
    else if(root1->left && !root2->left)
        printf("1");
        //return;
    else if(!root1->left && root2->left){
        printf("hello");
        root1->left = root2->left;
        printf("%d\n",root1->left->val);
        //return;
    }
    
    if(root1->right && root2->right)
        mergeTrees2(&root1->right,&root2->right);
    else if(root1->right && !root2->right)
        printf("1");
        //return;
    else if(!root1->right && root2->right){
        printf("hello");
        root1->right = root2->right;
        printf("%d\n",root1->right->val);
        //return;
    }
    
    
    *root1P = root1;
    *root2P = root2;
    return;
    
}

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    
    if(root1 == NULL)
        return root2;
    
    if(root2 == NULL)
        return root1;
    
    mergeTrees2(&root1,&root2);
    
    return root1;
    
}