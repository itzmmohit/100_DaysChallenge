int maxProfit(int* prices, int pricesSize){
    int i,maxp=0,profit,min;
    min=prices[0];
    for(i=1;i<pricesSize;i++)
    {
        if(prices[i]<min)
            min=prices[i];
        profit=prices[i]-min;
        if(profit>maxp)
            maxp=profit;
    }
    return maxp;
}

