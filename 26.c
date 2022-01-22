void pushToEnd(int** nums_addr,int index,int n){
    int* nums = *nums_addr;
    int temp = nums[index];
    for(int i=index;i<n-1;i++){
        nums[i] = nums[i+1];
    }
    
    nums[n-1] = -9999999999;
    
    *nums_addr = nums;
}


int removeDuplicates(int* nums, int numsSize){
    int n = numsSize;
    if (n==0 || n==1)
        return n;

    int j = 0;

    for (int i=0; i < n-1; i++)
        if (nums[i] != nums[i+1])
            nums[j++] = nums[i];

    nums[j++] = nums[n-1];

    return j;
}