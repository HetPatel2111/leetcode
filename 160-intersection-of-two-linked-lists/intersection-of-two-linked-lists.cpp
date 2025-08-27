/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1!=nullptr){
            visited.insert(temp1);
            temp1 = temp1->next;
        }

        while(temp2 != nullptr){
            if(visited.find(temp2) != visited.end()) return temp2;
            temp2 = temp2->next;
        }

        return nullptr;
    }
};