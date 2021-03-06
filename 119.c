

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    
    
   int *ret = NULL;
	*returnSize = rowIndex + 1;
	ret = malloc(sizeof(int)* (rowIndex + 1));

	ret[0] = 1;
	if(rowIndex == 0) 
		return ret;

	ret[1] = 1;
	if(rowIndex == 1)
		return ret;

	for(int row = 2; row <= rowIndex; row++) {
        int prev = ret[0];
		for(int col = 1; col <= row - 1; col++) {
            int temp = prev + ret[col];
            prev = ret[col];
			ret[col] = temp;
		}
		ret[row] = 1;
	}
	return ret;

}