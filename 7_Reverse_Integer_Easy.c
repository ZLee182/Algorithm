/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows. 
*/
//解法一    8%   29ms
int reverse(int x) {
    int i,j,count=0,sign;
    int temp = x;
    if( x > 0)//判断这个数的正负号
        sign = 1;
    else if( x < 0)
        sign = 0;
    else
        return 0;
        
    for(count=0;x!=0;count++)//计算需要多少位数组
        x = x/10;   
    int* nums;
    nums = (int*)malloc(sizeof(int*)*count);
    for(count=0;temp!=0;count++)//将数的每一位赋给数组里面
    {
        nums[count] = temp%10; 
        temp = temp / 10;
        
    }

    for( i = 0, j = count-1; j > i; i++ , j--)//进行反转
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    long long int total=0,p;
    for(i = 0; i <count; i++)//将反转的数加起来
    {
        total = total +nums[i]*pow(10,i);
    }
    if(total>2147483647||total<-2147483647)
        return 0;
    if(sign == 1)
        return total;
    else if(sign == 0)
        p =  0-abs(total);

    return p;
}
