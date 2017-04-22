/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.
*/
#define max 1010
int hammingDistance(int x, int y) {
    int a_x[max]={0},a_y[max]={0};
    int i,count=0,x_temp=x,y_temp=y;
    for( i = 0 ; x!=0 ; i++)//x十进制转二进制
    {
        a_x[i] = x % 2;
        x = x / 2;
    }
    for( i = 0 ; y!=0 ; i++)//y十进制转二进制
    {
        a_y[i] = y % 2;
        y = y / 2;
    }

    for( i = 0 ; x_temp!=0 || y_temp!=0 ; i++ )//判断两个数组每个数字是否一样
    {
        if( a_x[i] != a_y[i] )
            count++;
        x_temp = x_temp / 2;
        y_temp = y_temp / 2;
    }
    return count;
}
