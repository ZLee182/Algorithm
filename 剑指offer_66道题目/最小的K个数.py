
#输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

# -*- coding:utf-8 -*-
class Solution:
    def GetLeastNumbers_Solution(self, tinput, k):
        # write code here
        if k > len(tinput):
            return []
        return sorted(tinput)[0:k]
    
'''
思路：首先检查剩余的字符串是否足够长度，然后排序，筛选出符合需求的数组
'''
