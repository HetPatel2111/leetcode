class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        bool startingSpace=true;
        string ans;
        string temp;
        stack<string> st;
        for(auto &it: s){
            if(startingSpace && it==' ') continue;
            startingSpace=false;

            if(temp.size()!=0){
                if(it==' '){
                    st.push(temp);
                    temp="";
                }
                else temp+=it;
            }
            else{
                if(it==' ')continue;
                temp+=it;
            }
        }

        while(st.size()!=1){
            ans+=st.top()+" ";
            st.pop();
        }
        ans+=st.top();

        return ans;
    }
};