/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6. 

本题使用Kadane's Algorithm
算法核心，一个连续数组的最大和，只能是这个数字nums[i]本身或者这个数字加上前面数组数值nums[i]+general_max累加的最大值，从而获得最大的累计和

具体算法描述：https://www.linkedin.com/pulse/kadanes-algorithm-mustafa-bedir-tapkan
*/
int maxSubArray(int* nums, int numsSize) {
    int i;
    int general_max = nums[0];
    int current_max = nums[0];
    for(i=1;i<numsSize;i++)
    {
        if(nums[i]<(current_max + nums[i]) )
            current_max = current_max + nums[i];
        else
            current_max = nums[i];
        if(current_max > general_max)
            general_max = current_max ;
    }
    return general_max;
}
