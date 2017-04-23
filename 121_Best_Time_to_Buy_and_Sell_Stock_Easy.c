/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Example 1:

Input: [7, 1, 5, 3, 6, 4]
Output: 5

max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)

Example 2:

Input: [7, 6, 4, 3, 1]
Output: 0

In this case, no transaction is done, i.e. max profit = 0.

*/


int maxProfit(int* prices, int pricesSize) {
    int i,j,count = 0;;
    int max_diff = 0;
    for( i = 0 ; i < pricesSize ; i++)//向后进行比较，看是否有大于这个数的，如果没有的count一直等于零，则说明没有最大利润
        for( j =  i+1 ; j < pricesSize ; j++)
            if(max_diff < (prices[j] - prices[i]))
                {
                    max_diff = prices[j] - prices[i];
                    count = 1;
                }
    if(count==0)
        return 0;
    else
        return max_diff;
}
