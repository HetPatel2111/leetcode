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
    ListNode* removeNodes(ListNode* head) {
        ListNode*t1 = rev(head);
        ListNode*dummy = new ListNode(0);
        int maxVal=0;
        ListNode*tp=dummy;

        while(t1!=nullptr){
            if(maxVal <= t1->val){
                maxVal = t1->val;
                tp->next=t1;
                tp=tp->next;
            }
            t1=t1->next;
        }
        tp->next=nullptr;

        return rev(dummy->next);

    }

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
};