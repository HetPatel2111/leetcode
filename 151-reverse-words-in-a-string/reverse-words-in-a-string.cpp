class Solution {
public:
    string reverseWords(string s) {
        stack<string> s1;
        int i;
        s += ' ';
        string temp = "";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == ' '){
                /*For removing space*/
                if(!temp.empty()){
                    s1.push(temp);
                    temp="";
                } 
            }
            else{
                temp += s[i];
            }
        }

        string ans="";

        while(s1.size()!=1){
            ans += s1.top() + " ";
            s1.pop();
        }

        ans += s1.top();

        return ans;
    }
};