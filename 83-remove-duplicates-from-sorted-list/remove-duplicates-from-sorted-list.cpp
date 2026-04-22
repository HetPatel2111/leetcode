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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*dummy = new ListNode(101);
        dummy->next=head;
        ListNode*tp=dummy;
        while(tp->next!=nullptr){
            if(tp->next->val == tp->val){
                tp->next = tp->next->next;
            }
            else tp=tp->next;
        }

        return dummy->next;
    }
};