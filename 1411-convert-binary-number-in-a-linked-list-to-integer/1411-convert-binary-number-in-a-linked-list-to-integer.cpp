class Solution {
public:
    int binaryToDecimal(string binary) {
        int decimal = 0;
        for (char bit : binary) {
            decimal = decimal * 2 + (bit - '0');
        }
        return decimal;
    }

    int getDecimalValue(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while (temp != NULL) {
            s += (temp->val + '0');  
            temp = temp->next;
        }
        return binaryToDecimal(s);
    }
};
