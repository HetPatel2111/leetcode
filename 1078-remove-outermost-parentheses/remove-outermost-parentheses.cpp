class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        for(auto &it : s){
            if(!st.empty()){
                if(it=='('){
                    st.push(it);
                    ans+=it;
                }
                else{
                    st.pop();
                    if(!st.empty()){
                        ans+=it;
                    }
                }
            }
            else{
                st.push(it);
            }
        }
        return ans;
    }
};