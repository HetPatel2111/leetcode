class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> u;
        int n=s.size();
        int left=0;
        int ans=0;

        for(int i=0 ; i<n ; i++){
            if(u.find(s[i])==u.end()){
                u.insert({s[i],i});
                ans = max(ans,i-left+1);
                continue;
            }

            left = max(left,u[s[i]]+1);
            ans = max(ans,i-left+1);
            u[s[i]]=i;
            
            
        }

        return ans;
    }
};