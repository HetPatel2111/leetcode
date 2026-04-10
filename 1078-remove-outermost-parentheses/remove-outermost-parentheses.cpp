class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        for(auto &it : s){
            if(count!=0){
                if(it=='('){
                    count++;
                    ans+=it;
                }
                else{
                    count--;
                    if(count!=0){
                        ans+=it;
                    }
                }
            }
            else{
                count++;
            }
        }
        return ans;
    }
};