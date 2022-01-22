/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    
    if(p->val == root->val || q->val == root->val){
        return root;
    }
    
    else if(p->val < root->val && root->val < q->val){
        printf("hello1");
        return root;
    }
    
    else if(p->val < root->val &&  q->val < root->val){
        printf("hello2");
        return lowestCommonAncestor(root->left,p,q);
    }
    
    else if(root->val < p->val && root->val < q->val){
        return lowestCommonAncestor(root->right,p,q);
    }
    
    return root;
}