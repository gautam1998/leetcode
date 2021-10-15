
/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
https://leetcode.com/problems/binary-tree-inorder-traversal/
*/

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
int res[100] ;//the array that we will return after putting value in it.
int i = -1;

void MyFun(struct TreeNode* root);
    
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    if(root == NULL) {
        *returnSize = 0; // the size of the array
        return res;
    }
       
    MyFun(root); // to set values into the array in an Inorder traversal
    *returnSize = i + 1; //the size of the array
    i = -1; //reset i for the next call because i is a global variable
    return res;
}

void MyFun(struct TreeNode* root) {
    if(root == NULL)
        return ;
    MyFun(root->left);
    res[++i] = root->val;
    MyFun(root->right);
}
