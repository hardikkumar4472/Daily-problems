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
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* temp=head;
        while (temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int st=0;
        int end=vec.size()-1;
        while (st<end || st==end){
            if (vec[st]!=vec[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};