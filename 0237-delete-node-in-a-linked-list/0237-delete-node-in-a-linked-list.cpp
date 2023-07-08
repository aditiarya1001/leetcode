/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* head) {
        ListNode* tempnext= head->next;
        ListNode* prev= head;
        while(tempnext!= NULL)
        {
            prev=head;
            head->val= tempnext->val;
            head= head->next;
            tempnext= tempnext->next; 
        }
        prev->next= NULL;
    }
};