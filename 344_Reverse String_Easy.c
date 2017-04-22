/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".

Subscribe to see which companies asked this question.

*/
//解法一，C语言实现，耗时6ms

char* reverseString(char* s) {
    int i,j=strlen(s)-1;
    char temp;
    while(j>i)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}

//解法二，耗时6ms

char* reverseString(char* s) {
    int i,len=strlen(s);
    char temp;
            for(i = 0; i < len/2; i++)
            {
                temp = s[i];
                s[i] = s[len-i-1];
                s[len-i-1] = temp;
            }
    return s;
}

//解法三

void reverse(char* str)
{
    char* p = str + strlen(str)-1;
    char temp;
    while(str<p)
    {
        temp=*p;
        *p--=*str;
        *str++=temp;
    }
}
