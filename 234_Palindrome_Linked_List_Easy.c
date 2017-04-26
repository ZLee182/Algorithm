/*

Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
*/
//解法一  51%  9ms
//思路：判断回文，首先把链表中的数放到数组中，然后进行比对即可
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int count=0,i,j,*nums,judge = 0;
    struct ListNode* p;
    p = head;
    while(p)
    {
        p = p->next;
        count++;
    }
    p = head;
    nums = (int*)malloc(sizeof(int*)*count);
    
    for(i=0;i<count;i++)
    {
        nums[i] = p->val;
        p = p->next;
    }
    
    for(i=0,j=count-1;i<count/2;i++,j--)
    {
        if(nums[i]!=nums[j])
            judge = 1;
    }
    if(judge==1)
        return false;
    else
        return true;
}
