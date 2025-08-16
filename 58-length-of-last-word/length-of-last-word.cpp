class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0) return 0;

        bool flag=true;
        int n=s.size();
        int count=0;
        for(int i=n-1 ; i>=0 ; i--){
            if(s[i]!=' '){
                count++;
                flag=false;
            }
            else{
                if(!flag) break;
            }
        }
        return count;
    }
};