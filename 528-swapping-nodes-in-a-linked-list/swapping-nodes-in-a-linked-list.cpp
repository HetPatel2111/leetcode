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
    ListNode* swapNodes(ListNode* head, int k) {
        int newk=k;
        ListNode*temp=head;
        newk--;
        while(newk--){
            temp=temp->next;
        }
        int info=temp->val;

        ListNode*temp1=head;
        while(temp->next != nullptr){
            temp1=temp1->next;
            temp=temp->next;
        }

        int info2=temp1->val;
        temp1->val = info;

        newk=k;
        temp=head;
        newk--;
        while(newk--){
            temp=temp->next;
        }

        temp->val = info2;

        return head;

        
    }
};