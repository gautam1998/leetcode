

int uniquePaths(int m, int n){
    int dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j] = -1;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(i == (n-1) && j != (m-1)){
                dp[i][j] = 1;
            }
            else if(i != (n-1) && j == (m-1)){
                dp[i][j] = 1;
            }
            else if(i == n-1 && j == m-1){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
    }
    
    return dp[0][0];
}