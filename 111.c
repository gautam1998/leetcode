/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int min(int a,int b){
    if(a<=b)
        return a;
    return b;
}

int minDepth(struct TreeNode* root){
    
    if(root == NULL)
        return 0;
    int L = minDepth(root->left);
    int R = minDepth(root->right);
    
    return L<R && L || !R ? 1+L : 1+R;

}