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
    ListNode *detectCycle(ListNode *head) {
        if (head==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast){
                ListNode* temp=head;
                while (temp!=slow){
                    temp=temp->next;
                    slow=slow->next;
                }
                return temp;
            }
        }
        return NULL;
    }
};