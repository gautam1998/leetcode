

int maxProfit(int* prices, int pricesSize){
    int i=0;
    int buy ,sell ,profit=0;
    
    while(i < pricesSize-1){
        while(i < pricesSize-1 && prices[i] >= prices[i+1])i++;
        
        buy = prices[i];
        
        while(i < pricesSize-1 && prices[i] <= prices[i+1])i++;
        
        sell = prices[i];
        
        profit = profit + (sell - buy);
        
    }
    
    return profit;
}