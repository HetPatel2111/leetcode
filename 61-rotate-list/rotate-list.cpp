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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(!head) return head;
        if(head->next==nullptr) return head;
        int size=1;
        ListNode*temp=head;

        while(temp->next!=nullptr){
            size++;
            temp=temp->next;
        }

        

        if(k%size==0) return head;
        int n = k%size;
        n = size-n;

        temp->next=head;
        temp=head;
        ListNode*prev=nullptr;

        while(n--){
            prev=temp;
            temp=temp->next;
        }

        prev->next=nullptr;
        return temp;
    }
};