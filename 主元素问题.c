/*
主元素问题
给定一串数字，从中找出超过n/2的数，成为主元素
最开始的时候用了两个for循环计算出来，但是时间复杂度太大了，达到了n的平方，在提交的时候，时间受限。
后来发现这个题目的多种解法，时间复杂度都小的多
1.两个for循环解决
2.首先进行快速排序或者堆排序，然后直接输出第n/2的元素，必定是主元素
3.主元素算法，先设定一个比较值count=0，然后向后一个数比较，如果相同，则count++；若不同，count--。若相邻两个数都不一样，则count=-1，
这时候将这两个元素删除掉，那么对于剩下的数来说，主元素还是主元素，并不会发生改变。
这是算法的核心思想，这样的话算法的时间复杂度最大才是O（n）
*/
int majorityElement(int* nums, int numsSize)
{
    int i,count = 0;
    int mainer = nums[0];
    for(i=1;i<numsSize;i++)
    {
        if(mainer!=nums[i])
            count--;
        else
            count++;
        if(count==-1)
        {
            mainer = nums[i+1];
            i++;
            count = 0;
        }
    }
    if(count>0)
        return mainer;
    return;
}
