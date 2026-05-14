class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        int n=s.size();
        string ans;
        for(int i=0 ; i<n ; i++){
            if(!st.empty()){
                if(s[i]=='('){
                    ans+=s[i];
                    st.push(s[i]);
                    continue;
                }

                if(st.size() > 1){
                    ans+=s[i];
                    st.pop();
                    continue;
                }

                st.pop();

            }
            else st.push(s[i]);
        }

        return ans;
    }
};