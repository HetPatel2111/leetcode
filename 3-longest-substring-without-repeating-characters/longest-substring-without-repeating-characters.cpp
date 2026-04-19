class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int ans=0;
        int left=0;
        for(int i=0 ; i<s.size() ; i++){
            if(m.find(s[i])!=m.end()){
                left = max(left,m[s[i]]+1);
            }
            m[s[i]]=i;
            ans = max(ans,i-left+1);
        }

        return ans;
    }
};