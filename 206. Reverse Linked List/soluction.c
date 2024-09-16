/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode* prev = NULL;
        struct ListNode* tmp = head;

        while(tmp != NULL)
        {
                struct ListNode *next = tmp->next;
                tmp->next = prev;
                prev=tmp;
                tmp=next;
        }
        return prev;
}
