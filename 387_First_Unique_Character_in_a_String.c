/*
387. First Unique Character in a String

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
*/
//思路一：两个for循环结束问题,不过数组过大时间超限
/*
int firstUniqChar(char* s) {
    int i,j,count=0;
    for( i = 0; i < strlen(s); i++)
    {
        count = 0;
        for( j = 0; j < strlen(s); j++)
        {
            if(s[i]!=s[j]&&i!=j)
                count++;
        }
        if(count==strlen(s)-1)
            return i;
    }
    return -1;
}
*/
//思路二，写一个数组，然后标记出现的次数用count[字母的ASCII码值]
//12ms   46%
int firstUniqChar(char* s) {
    int count[256]={0};//从a到z的ASCII最大码值为122
    int i = 0,temp;
    while( (temp = s[i]) != 0)
    {
        count[temp]++;
        i++;
    }
    i = 0;
    while((temp = s[i]) != 0)
    {
        if(count[temp]==1)
            return i;
        i++;
    }
    return -1;
}
