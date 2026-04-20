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
        if(head==nullptr || head->next==nullptr || k==0) return head;

        int size=1;
        ListNode*temp=head;

        while(temp->next!=nullptr){
            size++;
            temp=temp->next;
        }

        k=k%size;
        int n = size-k;
        if(k==0) return head;

        temp->next=head;

        ListNode*t1=head;
        ListNode*t2=nullptr;

        while(n--){
            t2=t1;
            t1=t1->next;
        }

        t2->next=nullptr;
        return t1;
    }
};