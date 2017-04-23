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
        if(s[i]!=32)
            for(j=i;;j++)
                if( s[j]==32 ||s[j]==0)
                {
                    count++;
                    i=j;
                    break;
                }
    return count;
}
