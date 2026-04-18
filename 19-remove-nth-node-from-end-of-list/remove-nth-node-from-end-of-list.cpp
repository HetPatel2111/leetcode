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
        int size=0;

        ListNode*temp=head;

        if(temp->next==nullptr) return nullptr;

        while(temp!=nullptr){
            size++;
            temp=temp->next;
        }

        if(size==n) return head->next;

        int newLen = size-n-1;

        temp=head;
        while(newLen>0){
            temp=temp->next;
            newLen--;
        }

        temp->next = temp->next->next;
        
        return head;
    }
};