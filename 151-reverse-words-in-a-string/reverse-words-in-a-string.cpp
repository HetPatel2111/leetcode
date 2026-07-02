class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;
        s+=" ";
        int n=s.size();
        bool fs=true;
        string temp;
        for(int i=0 ; i<n ; i++){
            if(fs && s[i]==' ')continue;
            fs=false;

            if(temp!=""){
                if(s[i]==' '){
                    st.push(temp);
                    temp="";
                }
                else temp+=s[i];
                
            }
            else{
                if(s[i]!=' ')temp+=s[i];
            }
        }

        string ans;
        while(st.size()!=1){
            ans+=st.top()+" ";
            st.pop();
        }

        ans+=st.top();
        return ans;
    }
};