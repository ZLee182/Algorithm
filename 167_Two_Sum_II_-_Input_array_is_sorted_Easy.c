/*
 
DescriptionHintsSubmissionsSolutions

Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2 
*/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
//解法一  13%  406ms
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* num,i,j;
    *returnSize = 2;
    num = (int*)malloc(2*sizeof(int*));
    for(i=0;i<numbersSize-1;i++)
        for(j=i+1;j<numbersSize;j++)
             if( ( (numbers[i] + numbers[j]) == target) && ( i != j ) )
            {
                num[0] = i+1;
                num[1] = j+1;
                return num;
            }
    return;
}
