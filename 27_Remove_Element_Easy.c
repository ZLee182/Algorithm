/*
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.
*/
//解法一  超越33%  3ms
int removeElement(int* nums, int numsSize, int val) {
    int i,j;
    for(i=0;i<numsSize;i++)
        if(nums[i] == val)
        {
            for(j=i;j<numsSize-1;j++)
                nums[j] = nums[j+1];
            numsSize--;//如果有重复的那么长度减一
            i = i - 1;//并且定位到下一个元素，由于提前一位，所以减一重新检查
        }
    return numsSize;
}

//解法二  超越33%  3ms
int removeElement(int* nums, int numsSize, int val) {
    int i,begin = 0;
    for(i=0;i<numsSize;i++)
        if(nums[i]!=val)
            nums[begin++]=nums[i];
    return begin;
}
