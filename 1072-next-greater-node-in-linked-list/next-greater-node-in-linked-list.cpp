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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> num;
        
        while(head!=nullptr){
            num.push_back(head->val);
            head=head->next;
        }

        vector<int> ans(num.size(),0);
        stack<int> st;
        int n=ans.size();
        st.push(num[n-1]);

        for(int i=n-2 ; i>=0 ; i--){
            if(!st.empty()){
                if(num[i] < st.top()){
                    ans[i] = st.top();
                    st.push(num[i]);
                    continue;
                }
                
                while(!st.empty() && num[i] >= st.top()){
                    st.pop();
                }
                if(!st.empty()) ans[i]=st.top();
                st.push(num[i]);
            }
            else{
                st.push(num[i]);
            }
        }
        return ans;
    }
};