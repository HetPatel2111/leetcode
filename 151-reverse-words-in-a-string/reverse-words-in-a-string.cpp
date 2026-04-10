class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        stack<string> st;
        string temp;

        for(auto &it : s){
            if(it==' '){
                if(temp!=""){
                    st.push(temp);
                    temp="";
                }
            }
            else{
                temp+=it;
            }
        }

        temp="";
        while(st.size()!=1){
            temp+=st.top()+" ";
            st.pop();
        }

        temp+=st.top();
        return temp;
    }
};