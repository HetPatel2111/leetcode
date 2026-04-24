class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> ans(n,-1);

        for(int i=2*n-1 ; i>=0 ; i--){
            int ele = nums[i%n];
            if(!st.empty()){
                if(ele < st.top()){
                    if(i<n){
                        ans[i] = st.top();
                    }
                    st.push(ele);
                    continue;
                }

                while(!st.empty() && ele >= st.top()) st.pop();

                if(!st.empty() && i<n) ans[i] = st.top();
                st.push(ele);
            }
            else{
                st.push(ele);
            }
        }
        return ans;
    }
};