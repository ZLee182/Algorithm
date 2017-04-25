/*


Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5 
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //难点在于怎么删除最后一个元素，并且其他元素都是val
//解法一  27%  9ms
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head&&head->val==val)
        head = removeElements(head->next,val);
    if(head&&head->val!=val)
        head->next = removeElements(head->next,val);
    return head;
}
