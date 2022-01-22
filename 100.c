/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool recur(struct TreeNode* p, struct TreeNode* q){
     if(p == NULL && q == NULL)
        return true;
    else if(p == NULL && q != NULL)
        return false;
    else if(p != NULL && q == NULL )
        return false;
    if(p->val != q->val){
        return false;
    }
    
    return recur(p->left,q->left)&recur(p->right,q->right);
    
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
   return recur(p,q);
    
}

