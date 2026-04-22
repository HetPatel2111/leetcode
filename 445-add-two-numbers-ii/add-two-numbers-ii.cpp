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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=rev(l1);
        l2=rev(l2);
        ListNode*dummy = new ListNode(0);
        ListNode*tp=dummy;
        int carry=0;

        while(l1!=nullptr || l2!=nullptr || carry){
            int sum=0;

            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }

            sum+=carry;
            carry = sum/10;

            ListNode*newn = new ListNode(sum%10);
            tp->next=newn;
            tp=tp->next;
        }

        return rev(dummy->next);
    }
};