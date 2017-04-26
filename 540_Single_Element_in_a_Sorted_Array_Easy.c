/*
 
Given a sorted array consisting of only integers where every element appears twice except for one element which appears once. Find this single element that appears only once.

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2

*/
//解法一   10%  3ms
int singleNonDuplicate(int* nums, int numsSize) {
    int i;
    for(i=0;i<numsSize;i=i+2)
        if(nums[i]!=nums[i+1])
            return nums[i];
    return;
}
