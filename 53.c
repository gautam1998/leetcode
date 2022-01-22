

int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    int sum = 0;
    
    for(int i=0;i<numsSize;i++){
        sum = sum + nums[i];
        if(max < sum)
            max = sum;
        if(sum < 0)
            sum = 0;
    }
    return max;
}

int maxLength(int*nums , int numsSize){
	int max = nums[0];
    int sum = 0;
    int max_length = 0;
    int length = 0;
    for(int i=0;i<numsSize;i++){
        length++;
        sum = sum + nums[i];
        if(length >= max_length && sum >= max){
            max_length = length;
        }
        if(max < sum)
            max = sum;
        
        if(sum < 0){
            sum = 0;
            length = 0;
        }
    }
    printf("%d",max_length);
    return max_length;
	
}