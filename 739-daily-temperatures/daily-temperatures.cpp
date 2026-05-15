class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;

        for(int i=n-1 ; i>=0 ; i--){
            if(!st.empty()){
                if(temperatures[i] < temperatures[st.top()]){
                    ans[i] = st.top() - i;
                    st.push(i);
                    continue;
                }

                while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                    st.pop();
                }

                if(!st.empty()) ans[i] = st.top()-i;
                st.push(i);

            }
            else st.push(i);
        }

        return ans;
    }
};