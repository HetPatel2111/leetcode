class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int> st;

        for(auto &it : s){
            if(it=='(' || it=='[' || it=='{') st.push(it);
            else if(st.empty() && it==')' || st.empty() && it=='}' || st.empty() && it==']') return false;
            else if(it==')' && st.top()!='(' || it==']' && st.top()!='[' || it=='}' && st.top()!='{') return false;
            else st.pop();
        }

        if(!st.empty()) return false;
        return true;
    }
};