/*
 
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3. 

*/
//思路：先转成数组，再由数组剔除掉重复的数字，再传回链表中
//解法一  54%  3ms
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL)
        return NULL;
    int* nums;
    int i,j,count=0,length;
    struct ListNode* p;
    p = head;
    while(p)
    {
        p = p->next;
        count++;
    }
    nums = (int*)malloc(sizeof(int*)*count);
    p = head;
    for( i = 0 ; i < count ; i++)
    {
        
        nums[i] = p->val;
        p = p->next;
    }
    
    length = 1;
    if(nums[0]==NULL&&count==0)
        return NULL;
    for(i=0;i<count-1;i++)
        if(nums[i]!=nums[i+1])
            nums[length++] = nums[i+1];
    p = head;
    
    for( i = 0 ; i<length;i++)
    {
        p->val = nums[i];
        if(i<length-1)
            p = p->next;
        if(i==length-1)
            p->next = NULL;
    }
    return head;
}
