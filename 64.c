

int minPathSum(int** grid, int gridSize, int* gridColSize){
    int col = gridColSize[0];
    int dp[gridSize][col];
    
    /*for(int i=0;i<gridSize;i++){
        for(int j=0;j<col;j++){
            dp[i][j] = 1;
        }
    }*/
    
    for(int i=gridSize-1;i>=0;i--){
        for(int j=col-1;j>=0;j--){
            if(i == gridSize-1 && j == col-1){
                dp[i][j] = grid[i][j];
            }
            else if(i == gridSize-1 && j != col-1){
                dp[i][j] = dp[i][j+1] + grid[i][j];
            }
            else if(i != gridSize-1 && j == col-1){
                dp[i][j] = dp[i+1][j] + grid[i][j];
            }
            else{
                if(dp[i+1][j] <= dp[i][j+1]){
                    dp[i][j] = dp[i+1][j] + grid[i][j];
                }
                else{
                    dp[i][j] = dp[i][j+1] + grid[i][j];
                }
            }
        }
    }
    
    for(int i = 0; i<gridSize; i++) 
   { 
     printf("\n"); 
     for(int j = 0; j<col; j++) 
     { 
       printf("%d\t", dp[i][j]); 
     } 
   } 
    
    
    
    return dp[0][0];
}