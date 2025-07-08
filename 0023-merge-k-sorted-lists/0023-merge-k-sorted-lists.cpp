class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vals;
        for (int i = 0; i < lists.size(); ++i) {
            ListNode* curr = lists[i];
            while (curr != nullptr) {
                vals.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(vals.begin(), vals.end());
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (int val : vals) {
            ListNode* newNode = new ListNode(val);
            if (!head) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        return head;
    }
};
