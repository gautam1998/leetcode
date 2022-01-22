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

void postorder(struct TreeNode* root , int** arr ,int* size){
    
    
    if(root == NULL)
        return;
    
    postorder(root->left,arr,size);
    postorder(root->right,arr,size);
    
    //printf("%d\n",root->val);
    
    int* arr1 = *arr;
    int count1 = *size;
    count1++;
    arr1[count1] = root->val;
    
    /*printf("%d\n",arr1[count1]);
    printf("size %d\n",count1);
    printf("size %d\n",*size);*/
    
    *size = count1;
    *arr = arr1;
    
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int* arr;
    arr = (int*)malloc(sizeof(int)*100);
    //arr[0] = -1;
    int size = -1;
    postorder(root,&arr,&size);
    //int num = 2;
    *returnSize = size+1;
    return arr;
}