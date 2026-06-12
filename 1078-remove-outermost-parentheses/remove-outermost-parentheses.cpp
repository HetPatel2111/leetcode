class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=0;
        string ans;
        for(auto &it : s){
            if(count!=0){
                if(it=='(') count++;
                if(it==')') count--;

                if(count>=1) ans+=it;
            }
            else count++;
        }

        return ans;
    }
};