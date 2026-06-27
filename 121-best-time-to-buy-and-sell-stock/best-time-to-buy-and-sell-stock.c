int maxProfit(int* prices, int n) {
    int max = 0;
    int min = prices[0];
    for(int i=0;i<n;i++)
    {
        if(prices[i] < min)
        {
            min = prices[i];
        }
        if(prices[i] - min > max)
        {
            max = prices[i] - min;
        }
    }
    return max;
}