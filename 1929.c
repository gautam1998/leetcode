

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int* ans;
    ans = (int*)malloc(sizeof(int)*2*numsSize);
    for(int i=0;i<numsSize;i++){
        ans[i] = nums[i];
    }
    int count = 0;
    for(int i=numsSize;i<2*numsSize;i++){
        ans[i] = nums[count];
        count ++;
    }
    *returnSize = 2*numsSize;
    return ans;
}