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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || head->next==nullptr) return nullptr;
        if(head->next->next == nullptr){
            head->next=nullptr;
            return head;
        }
        ListNode* fast=head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }

            if(slow!=nullptr && slow->next!=nullptr){
                slow->val=slow->next->val;
                slow->next=slow->next->next;
            }
            

        return head;
    }
};