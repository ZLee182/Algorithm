/*
Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
*/

#define max 1010
int hammingWeight(uint32_t n) {
    uint32_t i,count = 0,temp = n;
    int a[max] = {0};
    for(i = 0 ;  n!= 0 ; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for(i=0;temp != 0;i++)
    {
        temp = temp / 2;
        if(a[i]==1)
            count++;
    }
    return count;
}
