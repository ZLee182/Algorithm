/*
441. Arranging Coins

You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1:

n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.
*/
//思路，就像高斯定理一样，首项加末项乘香树除以2就是n
//解法一  83%  23ms
int arrangeCoins(int n) {
    long long int i = n;
    i = (sqrt(8*i+1)-1)/2;
    return i;
}
/解法二   98%  19ms
//我试着把long long int 改成float，但是2146467959数据没法通过， 超出了范围，如果改成double就可以了。直接怼到98.65%
int arrangeCoins(int n) {
    double i = n;
    i = (sqrt(8*i+1)-1)*0.5;
    return i;
}
