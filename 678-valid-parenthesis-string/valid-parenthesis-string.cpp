class Solution {
public:
    bool checkValidString(string s) {
        int count=0;   // count for opening parenthesis
        int countStar=0;
        int n=s.size();

        for(int i=0 ; i<n ; i++){
            if(s[i]=='(') count++;
            else if(s[i]=='*') countStar++;
            else{
                if(count>0){
                    count--;   // pop the opening parenthesis
                }
                else if(countStar>0){
                    countStar--;
                }
                else{
                    return false;
                }
            }
        }

        // now check for the right to left
        int count1=0;
        countStar=0;

        for(int i=n-1 ; i>=0 ; i--){
            if(s[i]==')') count1++;
            else if(s[i]=='*') countStar++;
            else{
                if(count1>0){
                    count1--;   // pop the closing parenthesis
                }
                else if(countStar>0){
                    countStar--;
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }
};