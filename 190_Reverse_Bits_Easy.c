/*
 
Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Follow up:
If this function is called many times, how would you optimize it? 
*/
//解法一  3% 6ms
uint32_t reverseBits(uint32_t n) {
    int i,j,temp;
    int* a;
    a=(int*)malloc(32*sizeof(int*));
    memset(a,0,32*sizeof(int*));
    for(i=0;n!=0;i++)
    {
        a[i] = n%2;
        n = n /2;
    }
    for(i=0,j=31;i<32/2;i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    uint32_t m=0;
    for(i=0;i<32;i++)
    {
        m = m + pow(2,i)*a[i];
    }
    
    return m;
}
