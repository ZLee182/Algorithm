/*
 
DescriptionHintsSubmissionsSolutions

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:

    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.

*/
//解法一  81%  6ms
void moveZeroes(int* nums, int numsSize) {
    int i,begin = 0;
    for(i=0;i<numsSize;i++)
        if(nums[i]!=0)
            nums[begin++]=nums[i];
    for(i=begin;i<numsSize;i++)
        nums[i]=0;
    return nums;
}

//解法二   81%  6ms  这种解法很好，提供一种了新思路
void moveZeroes(int* nums, int numsSize) {
    int i,temp,j=0;
    for(i=0;i<numsSize;i++）
        if(nums[i]!=0)
        {
            temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
        }
    return nums;
}

