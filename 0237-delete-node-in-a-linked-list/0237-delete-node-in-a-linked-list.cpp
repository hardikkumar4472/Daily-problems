class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node == nullptr || node->next ==nullptr) return;
        node->val = node->next->val;
        node->next = node->next->next;   
    }
};