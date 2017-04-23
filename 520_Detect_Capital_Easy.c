/*
 Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

    All letters in this word are capitals, like "USA".
    All letters in this word are not capitals, like "leetcode".
    Only the first letter in this word is capital if it has more than one letter, like "Google".

Otherwise, we define that this word doesn't use capitals in a right way.

Example 1:

Input: "USA"
Output: True

Example 2:

Input: "FlaG"
Output: False

*/
bool detectCapitalUse(char* word) {
    int n = strlen(word);
    int i;
    int cap = 0;
    int low = 0;
    if( word[i] >= 'A' && word[i] <= 'Z')//大写情况
    {
        for( i = 1; i < strlen(word); i++)
            if(word[i] >= 'a' && word[i] <= 'z')
                low = 1;
        if(low==0)
            return true;//全部是大写
        else//
            for( i = 1; i < strlen(word); i++)
                if( word[i] >= 'A' && word[i] <= 'Z')
                    return false;
            return true;//首字母大写
    }
    else if( word[i] >= 'a' && word[i] <= 'z')//小写情况
    {
        for( i = 1; i < strlen(word); i++)
            if(word[i] >= 'A' && word[i] <= 'Z')
                cap = 1;
        if(cap==0)//全是小写字母
            return true;
        else
            return false;
    }
    return;
}
