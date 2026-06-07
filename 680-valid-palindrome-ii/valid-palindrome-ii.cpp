class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0;
        int h=n-1;

        while(l<h){
            if(s[l]!=s[h]){
                return ( help(s,l,h-1) || help(s,l+1,h) );
            }
            l++;
            h--;
        }

        return true;
    }

    bool help(string&s , int l , int h){
        while(l<h){
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
};