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
        int len1=0;
        int len2=0;

        ListNode*a=headA;
        ListNode*b=headB;

        while(a!=nullptr){
            len1++;
            a=a->next;
        }

        while(b!=nullptr){
            len2++;
            b=b->next;
        }

        int diff=max(len2,len1) - min(len2,len1);

        a=headA;
        b=headB;
        
        while(diff--){
            if(len1>len2){
                a=a->next;
            }else{
                b=b->next;
            }
        }

        while(a!=nullptr && b!=nullptr){
            if(a==b) return a;
            a=a->next;
            b=b->next;
        }

        return nullptr;
    }
};