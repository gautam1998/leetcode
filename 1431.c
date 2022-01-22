

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    int max = 0;
    for(int i=0;i<candiesSize;i++){
        if(candies[i] >= max)
            max = candies[i];
    }
    
    bool* result;
    result = (bool*)malloc(sizeof(bool)*candiesSize);
    for(int i=0;i<candiesSize;i++){
        if(candies[i]+extraCandies >= max)
            result[i] = true;
        else
            result[i] = false;
    }
    return result;
}