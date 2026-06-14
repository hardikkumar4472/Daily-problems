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
    int pairSum(ListNode* head) {
        vector<int> vec;
        vector<int> res;
        ListNode* temp=head;
        while (temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=vec.size()-1;
        while (i<j){
            res.push_back(vec[i]+vec[j]);
            i++;
            j--;
        }
        sort(res.rbegin(),res.rend());
        return res[0];
    }
};