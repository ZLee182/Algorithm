/*
Write a function that takes a string as input and reverse only the vowels of a string.
*/

char* reverseVowels(char* s) {
    int x,i=0,j=strlen(s) - 1;//将左右两侧的编号记下，右边为i，左边为j
    char temp;
    for(x = 0; j > i ; x++)
    {
        for(i = i; i < j ; i++)//从左边判断是否有元音字母，若果有就取出i
            if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
                    break;
        for(j = j; j > i ; j--)//从右边判断是否有元音字母，若果有就取出j
            if( s[j]=='a' || s[j]=='e'  || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' )
                    break;
        temp = s[j];//交换编号为i与j的元音
        s[j] = s[i];
        s[i] = temp;
        i++;//下一次检测i+1个数
        j--;//下一次检测j+1个数
    }
    return s;
}
