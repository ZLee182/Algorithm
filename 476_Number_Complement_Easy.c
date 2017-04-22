/*
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Note:

    The given integer is guaranteed to fit within the range of a 32-bit signed integer.
    You could assume no leading zero bit in the integer’s binary representation.
*/


#include<math.h>
#define max 1010
int findComplement(int num) {
    int count = 0,temp = num,temp_1=num;
    int a[max]={0},b[max]={0};
    int i,n = 0;
    for( i = 0 ; num != 0 ; i++)//将num转为二进制
    {
        a[i] = num % 2;
        num = num / 2;
    }
    for( i = 0; temp != 0 ; i++)//将数据进行转换。1->0,0->1;
    {
        if(a[i]==0)
            b[i] = 1;
        else
            b[i] = 0;
        temp = temp /2;
    }

    for( i = 0; temp_1!=0; i++)//将转换之后的二进制转化为十进制
    {
        if(b[i]==1)
            n = n + pow(2,i);
            temp_1 = temp_1 / 2;
    }
    return n;
}
