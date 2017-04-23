/*
Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Please note that the string does not contain any non-printable characters.

Example:

Input: "Hello, my name is John"
Output: 5

*/

int countSegments(char* s) {
    int i,j,count = 0;
    for( i = 0 ; i < strlen(s) ; i++)
        if(s[i]!=32)//找到不是空格的字符，对于这个字符之后进行遍历，知道下一个空格或者回车为一个字符进行统计
            for(j=i;;j++)
                if( s[j]==32 ||s[j]==0)//找到空格或者回车，到这里是一个字符串，进行+1，然后将此处为止返回继续进行查询
                {
                    count++;
                    i=j;
                    break;
                }
    return count;
}
