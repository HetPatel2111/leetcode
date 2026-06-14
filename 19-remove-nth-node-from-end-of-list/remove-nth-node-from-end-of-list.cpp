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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr && n==1) return nullptr;
        int len=0;
        ListNode*temp=head;

        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }

        if(len==n) return head->next;

        int k=len-n;
        k--;
        ListNode*temp1=head;
        while(k--){
            temp1=temp1->next;
        }

        temp1->next=temp1->next->next;

        return head;

    }
};