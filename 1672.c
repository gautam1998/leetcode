

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max_wealth = 0;
    int col = 0;
    int count,sum;
    for(int i=0;i<accountsSize;i++){
        count=0;sum = 0;
        //col = 0;
        while(count != accountsColSize[col]){
            sum = sum + accounts[i][count];
            count ++;
        }
        if(sum >= max_wealth){
            max_wealth = sum;
        }
        col++;
    }
    printf("%d",accountsSize);
    return max_wealth;
}