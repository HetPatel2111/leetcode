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
        if(!head || head->next == nullptr) return head;
        vector<int> odd;
        vector<int> even;
        bool check = true; // odd
        ListNode* temp = head;

        while(temp != nullptr){
            if(check){
                odd.push_back(temp->val);
                check = false;
            }
            else{
                even.push_back(temp->val);
                check = true;
            }
            temp = temp->next;
        }

        int n1 = odd.size();
        int n2 = even.size();
        temp = head;
        int i=0;
        while(n1--){
            temp->val = odd[i++];
            temp=temp->next;
        }
        i=0;
        while(n2--){
            temp->val = even[i++];
            temp = temp->next;
        }

        return head;
    }
};