class Solution {
public:
    int evaluate(string s , int a , int b){
        if(s=="+") return a+b;
        if(s=="-") return a-b;
        if(s=="*") return a*b;
        if(s=="/") return a/b;
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(auto &it : tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                int a = st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int ans = evaluate(it,b,a);
                st.push(ans);
            }
            else st.push(stoi(it));
        }

        return st.top();
    }
};