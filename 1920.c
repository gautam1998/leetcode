

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    int* ans;
    
    ans = (int*)malloc(sizeof(int)*numsSize);
    for(int i =0;i<numsSize;i++){
        ans[i] = nums[nums[i]];
        printf("%d\n",ans[i]);
    }
    printf("hello");
    *returnSize = numsSize;
    return ans;
}