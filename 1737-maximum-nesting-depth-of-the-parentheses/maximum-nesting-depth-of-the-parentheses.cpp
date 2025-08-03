class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max1=0;

        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == '(') count++;
            else if(s[i] == ')') count--;

            max1 = max(max1,count);
        }

        return max1;
    }
};