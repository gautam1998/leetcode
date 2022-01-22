int min(int a , int b){
    if(a >= b)
        return b;
    return a;
}

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize){
    int minPath[triangleSize];
    
    
    for(int i=0;i<triangleSize;i++){
        minPath[i] = triangle[triangleSize-1][i];
    }
    
    int col;
    for(int i=triangleSize-2;i>=0;i--){
        col = triangleColSize[i];
        printf("%d\n",col);
        for(int j=0;j<col;j++){
            printf("mins: %d ",min(minPath[j],minPath[j+1]));
            minPath[j] = min(minPath[j],minPath[j+1]) + triangle[i][j];
        }
    }
    
    return minPath[0];
}