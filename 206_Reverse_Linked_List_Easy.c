/*
Reverse a singly linked list.
*/
//解法一  21%  3ms
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//思路：先创建iintnt 一个数组，查找一共有多少元素，然后放进数组中，利用数组倒转，然后再重新放到单链表中
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* p,*q;
    int i=0,j,temp,count=0;
    int* nums;
    p = head;
    while(p)
    {
        p = p->next;
        count++;
    }

    nums = (int*)malloc(count*sizeof(int*));
    p = head;
    while(p)
    {
        nums[i] = p->val;
        p = p->next;
        i++;
    }
    
    for(i=0,j=count-1;i<count/2;i++,j--)
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    p = head;
    i = 0;
    while(p)
    {
        p->val = nums[i];
        p = p->next;
        i++;
    }

    return head;
}
