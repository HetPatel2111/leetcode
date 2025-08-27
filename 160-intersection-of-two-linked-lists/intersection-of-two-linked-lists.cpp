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

        ListNode* temp1 = headA;
        ListNode*temp2 = headB;

        while(temp1 != nullptr){
            len1++;
            temp1 = temp1->next;
        }

        while(temp2 != nullptr){
            len2++;
            temp2 = temp2->next;
        }

        bool BigFirstList = true;
        if(len2 > len1) BigFirstList=false; 
        int maxLen = max(len1,len2);
        int minLen = min(len1,len2);
        int shift = maxLen - minLen;
        temp1=headA;
        temp2=headB;
        if(BigFirstList){
            while(shift--) temp1 = temp1->next;
        }
        else {
            while(shift--) temp2 = temp2->next;
        }

        while(temp1 != nullptr){
            if(temp1 == temp2) return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        } 

        return nullptr;   
    }
};