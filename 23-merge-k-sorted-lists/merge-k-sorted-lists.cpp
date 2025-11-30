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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;

        for(auto &it : lists){
            while(it != nullptr){
                v.push_back(it->val);
                it=it->next;
            }
        }

        if(v.empty()) return nullptr;

        sort(v.begin(),v.end());
        ListNode*head = new ListNode(v[0]);
        ListNode*temp=head;

        for(int i=1 ; i<v.size() ; i++){
            ListNode*newn = new ListNode(v[i]);
            temp->next=newn;
            temp=temp->next;
        }

        return head;
    }
};