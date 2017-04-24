/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length. 
*/
//解法一 7%  172ms
int removeDuplicates(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize-1;i++)
        if(nums[i]==nums[i+1])
        {
            for(j=i;j<numsSize-1;j++)
            {
                nums[j] = nums[j+1];
            }
            numsSize--;
            i--;
        }
    return numsSize;
}

//解法二   23%  19ms
/*
这里我参考了27. Remove Element 题目第二种做法对算法进行改进，机理是相同的
*/
int removeDuplicates(int* nums, int numsSize) {
    int i,count = 1;
    if(nums[0]==NULL&&numsSize==0)
        return NULL;
    for(i=0;i<numsSize-1;i++)
        if(nums[i]!=nums[i+1])
            nums[count++] = nums[i+1];
    return count;
}
//解法三   69%  12ms
int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    for (i = 1, j = 0; i < numsSize; i++) 
        if (nums[i] != nums[i-1]) 
          nums[++j] = nums[i]; 
    return (numsSize > 0 ? j+1 : j);
}
