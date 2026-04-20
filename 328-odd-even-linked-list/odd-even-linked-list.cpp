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
    ListNode* oddEvenList(ListNode* head) {
        vector<ListNode*> odd;
        vector<ListNode*> even;
        bool oddIdx=true;
        ListNode*temp = head;

        while(temp!=nullptr){
            if(oddIdx){
                oddIdx=false;
                odd.push_back(temp);
            }
            else{
                oddIdx=true;
                even.push_back(temp);
            }
            temp=temp->next;
        }

        int n=odd.size();
        int m=even.size();

        ListNode* ans = new ListNode(0);
        ListNode*tp=ans;
        int i=0;
        while(i<n){
            tp->next=odd[i];
            tp=tp->next;
            i++;
        }
        i=0;
        while(i<m){
            tp->next=even[i];
            tp=tp->next;
            i++;
        }
        tp->next=nullptr;

        return ans->next;
    }
};