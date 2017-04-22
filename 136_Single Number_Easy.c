/*
题目要求：
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 

在使用排序的时候，选择堆排序，这样时间复杂度是O(N*logN)，相对来说时间复杂度稍微小一点，但是在用堆排序时，序号是一个问题，在使用大端排序时候，第一位编号为1，而不是0，所以在算法中我将原本的nums数组更改为num，将序号向后延伸一位，便于处理。
*/
void swap(int* nums,int i,int j)//交换传入数组的两个节点的值
{
    int temp;
    temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
void HeapAdjust(int* nums,int s,int n)//堆排序，使
{
    int i,temp;
    temp = nums[s];//将双亲节点存储起来
    for( i = 2*s ; i <= n ; i=i*2)
    {
        if(nums[i]<nums[i+1]&&i<n)
            i++;
        if( temp >= nums[i])
            break;
        nums[s] = nums[i];
        s=i;
    }
    nums[s] = temp;
}
void HeapSort(int* nums,int n)//进行堆排序
{
    int i,j;
    for(i = n / 2; i > 0 ; i--)
        HeapAdjust(nums,i,n);//传入双亲节点与长度，首先将最大值求出来，然后进入到for循环，将剩余的数字排列出来

    for(i = n; i > 1 ; i--)//将剩余的数字排列出来
    {
        swap(nums,1,i);//将最大值与数组最后一个交换位置
        HeapAdjust(nums,1,i-1);//数组缩小一个位置，继续进行取最大值
    }
}
int singleNumber(int* nums, int numsSize)
{
    int i,j=1;
    int* num;
    num = (int*)malloc(numsSize*sizeof(int*));
    for( i = 0 ; i < numsSize ; i++,j++)//使用堆排序时，第一位编号为1，而不是0。将原本的nums数组更改为num，将序号向后延伸一位
        num[j] = nums[i];
    HeapSort(num,numsSize);//进行堆排序
    for(i=1;i<numsSize+1;i+=2)//检测相邻两个元素是否相同，若不相同则说明是第i个是单位数
        if(num[i]!=num[i+1])
            return num[i];
    return;
}
