class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head) return nullptr;

        vector<int> vec;
        ListNode* temp = head;
        while (temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        sort(vec.begin(), vec.end());

        ListNode* newHead = new ListNode(vec[0]);
        ListNode* curr = newHead;
        for (int i = 1; i < vec.size(); i++) {
            curr->next = new ListNode(vec[i]);
            curr = curr->next;
        }
        return newHead;
    }
};
