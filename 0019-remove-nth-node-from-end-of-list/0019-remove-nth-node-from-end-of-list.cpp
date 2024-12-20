/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int totalNodes = 0;
    ListNode* temp = head;
    while (temp) {
        totalNodes++;
        temp = temp->next;
    }
    int positionFromStart = totalNodes - n + 1;
    if (positionFromStart == 1) {
        ListNode* toDelete = head;
        head = head->next; 
        delete toDelete;
        return head;
    }
    temp = head;
    for (int i = 1; i < positionFromStart - 1; i++) {
        temp = temp->next;
    }

    ListNode* toDelete = temp->next;
    temp->next = temp->next->next; 
    delete toDelete;               

    return head;
}
};