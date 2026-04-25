class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(auto &it : s){
            if(!st.empty()){
                if(tolower(it) == tolower(st.top())){
                    if(it!=st.top()) st.pop();
                    else st.push(it);
                }
                else{
                    st.push(it);
                }
            }
            else{
                st.push(it);
            }
        }

        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};