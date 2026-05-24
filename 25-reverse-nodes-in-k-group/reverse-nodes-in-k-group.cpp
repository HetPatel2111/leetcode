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
    void rev(vector<int>&ans , int k , int left , int right){
        int n=ans.size();

        if(left+k >n){
            return;
        }

        while(left<right){
            swap(ans[left],ans[right]);
            left++;
            right--;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> ans;
        ListNode*temp = head;

        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        int n=ans.size();

        for(int i=0 ; i<n ; i+=k){
            rev(ans,k,i,i+k-1);
        }

        temp=head;
        int i=0;

        while(temp!=nullptr){
            temp->val=ans[i];
            i++;
            temp=temp->next;
        }

        return head;

    }
};