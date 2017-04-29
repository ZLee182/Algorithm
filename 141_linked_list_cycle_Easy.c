/*
判断输入的链表是否是循环链表
思路：利用快慢指针，一个是p = p->next;另外一个是q = q->next；如果两个指针相遇了，则说明是循环链表
*/
//解法一   22%  6ms
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* p;
    struct ListNode* q;
    p = head;
    q = head;
    if(!head)
        return false;

    while(p!=NULL&&q!=NULL&&q->next)
    {
            p = p->next;
            q = q->next->next;
        if(p==q)
            return true;
    }
    return false;
}
