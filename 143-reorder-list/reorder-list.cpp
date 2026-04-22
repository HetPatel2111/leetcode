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
    ListNode*rev(ListNode*head){
        ListNode*prev=nullptr;

        while(head!=nullptr){
            ListNode*ahed = head->next;
            head->next=prev;
            prev=head;
            head=ahed;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(head->next==nullptr) return;

        ListNode*fast=head->next;
        ListNode*slow=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }

         ListNode*temp=slow->next;
         slow->next=nullptr;
         slow=temp;

        slow = rev(slow);

        // ListNode*dummy = new ListNode(0);
        // ListNode*tp=dummy;
        fast=head->next;
        ListNode*ans = head;
        while(fast!=nullptr && slow!=nullptr){
            ListNode* fnext = fast->next;
            ListNode* snext = slow->next;   

            ans->next=slow;
            ans=ans->next;
            ans->next=fast;
            ans=ans->next;

            fast = fnext;
            slow = snext;
            // fast=fast->next;
            // slow=slow->next;
            
        }

        if(slow!=nullptr) ans->next=slow;
        else ans->next=nullptr;

    }
};