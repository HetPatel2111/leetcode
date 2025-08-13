class Solution {
public:

    void expand(string &s , int left , int right , int &start , int &maxlen){
        int n = s.size();

        while(left>=0 && right<n && s[left]==s[right]){
            if(right-left+1 > maxlen){
                start=left;
                maxlen = right-left+1;
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        if(!s.size()) return s;

        int n=s.size();
        int start=0;
        int maxlen=1;

        for(int i=0 ; i<n ; i++){
            // for odd length
            expand(s,i,i,start,maxlen);
            // for even length
            expand(s,i,i+1,start,maxlen);
        }

        return s.substr(start,maxlen);
    }
};