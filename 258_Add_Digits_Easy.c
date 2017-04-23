/*
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime? 
*/
int a[101];
int addDigits(int num) {
    int i;
    while(num>=10)
    {
        num = getArray(num);//直到num小于10才返回
    }
    return num;
}
int getArray(int total)
{
    int i,count = 0, res = 0;
    for(i = 0; total != 0 ; i++)//将数字分配到数组中
    {
        a[i] = total % 10;
        total = total / 10;
        count++;
    }
    for(i = 0 ; i < count ; i++)//累加起来
        res = res + a[i];
    return res;
}
