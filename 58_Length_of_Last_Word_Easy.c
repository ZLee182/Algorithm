/*

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example,
Given s = "Hello World",
return 5. 
*/
//思路:先找出第一个不是空格的字符，在后面重新写一个for循环，直到找到第一个空格键或者循环数为0，返回count
//特殊实例："abc","abc  "
//解法一    10%   3ms
int lengthOfLastWord(char* s) {
    int i,j=0,length=0,count=0;
    length = strlen(s);
    for(i=length-1;i>=0;i--)
        if(s[i]!=' '&&s[i]!=','&&s[i]!='.')
            for(j=i;j>=0;j--)
            {
                if(s[j]!=' ')
                    count++;
                if(s[j]==' '||j==0)
                    return count;
            }
    return count;
}
