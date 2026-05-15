class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> st;
        int n=arr.size();
        vector<int> ans(n,-1);

        for(int i=n-1 ; i>=0 ; i--){
            if(!st.empty()){
                ans[i] = st.top();

                if(arr[i] > st.top()) st.push(arr[i]);
            }
            else st.push(arr[i]);
        }

        return ans;
    }
};