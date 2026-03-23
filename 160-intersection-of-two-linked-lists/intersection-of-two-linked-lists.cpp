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
        unordered_set<ListNode*> s;

        ListNode*a=headA;

        while(a!=nullptr){
            s.insert(a);
            a=a->next;
        }

        ListNode*b=headB;

        while(b!=nullptr){
            if(s.find(b)!=s.end()){
                return b;
            }
            b=b->next;
        }

        return nullptr;
    }
};