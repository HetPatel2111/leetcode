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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> m;

        ListNode*temp = head;

        while(temp !=nullptr){
            m[temp->val]++;
            temp = temp->next;
        }

        temp=nullptr;
        temp = new ListNode();
        ListNode* temp1 = temp;
        for(auto it : m){
            if(it.second == 1){
                ListNode*newn = new ListNode(it.first);
                if(temp==nullptr) temp=newn;
                else{
                    temp->next = newn;
                    temp = temp->next;
                } 
            }
        }

        return temp1->next;
    }
};