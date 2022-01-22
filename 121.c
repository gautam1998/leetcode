

int maxProfit(int* prices, int pricesSize){
    int start = 0, i;
    int profit;
    int max = 0;
        
        for(i=1; i<pricesSize; i++){
            profit = prices[i] - prices[start];
            if(profit<0){
                profit=0;
                start=i;
            }
            if(profit>max)
                max=profit;
        }
        return max;
    
}