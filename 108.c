/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* BST(int* nums, int numsSize){
    if(numsSize == 1){
        struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        node->val = nums[0];
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    if(numsSize == 2){
        struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        struct TreeNode* node2 = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        node->val = nums[1];
        node->left = node2;
        node2->val = nums[0];
        node2->left = NULL;
        node2->right = NULL;
        node->right = NULL;
        return node;
    }
    
    int mid;
    if(numsSize%2 == 0)
        mid = numsSize/2;
    else
        mid = numsSize/2 + 1;
    
    printf("%d\n",mid);
    printf("%d\n",nums[mid-1]);
 
    int nums1[mid-1];
    printf("nums1\n");
    for(int i=0;i<mid-1;i++){
        nums1[i] = nums[i];
        printf("%d",nums[i]);
        
    }
    printf("\n");
    
    int nums2[numsSize-mid];
    printf("nums2\n");
    int count = 0;
    for(int i=mid;i<numsSize;i++){
        nums2[count] = nums[i];
        printf("%d",nums2[count]);
        
        count = count + 1;
    }
    printf("\n");
    printf("-------------------------------------");
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = nums[mid-1];
    node->left = BST(nums1,mid-1);
    node->right = BST(nums2,numsSize-mid);
    return node;
    
        
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return BST(nums,numsSize);
    
    
}