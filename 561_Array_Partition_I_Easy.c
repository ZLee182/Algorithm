/*
 

Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example 1:

Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4.
思路：把所有数排好序，然后把单数项加起来
*/
//解法一  53%  42ms
int arrayPairSum(int* nums, int numsSize) {
    quicksort(nums,0,numsSize-1);
    int i,total=0,b;
    for( i = 0 ; i < numsSize -1; i = i + 2 )
    {
        total = total + nums[i];
    }
    return total;
}
 void quicksort(int* nums,int left,int right)
    {
        int i,j,t,temp;
        if(left>right)
           return;

        temp=nums[left]; //temp中存的就是基准数
        i=left;
        j=right;
        while(i!=j)
        {
                       //顺序很重要，要先从右边开始找
                       while(nums[j]>=temp && i<j)
                                j--;
                       //再找右边的
                       while(nums[i]<=temp && i<j)
                                i++;
                       //交换两个数在数组中的位置
                       if(i<j)
                       {
                                t=nums[i];
                                nums[i]=nums[j];
                                nums[j]=t;
                       }
        }
        //最终将基准数归位
        nums[left]=nums[i];
        nums[i]=temp;

        quicksort(nums,left,i-1);//继续处理左边的，这里是一个递归的过程
        quicksort(nums,i+1,right);//继续处理右边的 ，这里是一个递归的过程
    }
