class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> u;
        int ans=0;
        int left=0;

        for(int i=0 ; i<n ; i++){
            char ch=s[i];
            if(u.find(ch)==u.end()){
                u.insert({ch,i});
                ans = max(ans,i-left+1);
                continue;
            }

            left = max(left,u[ch]+1);
            u[ch]=i;
            ans= max(ans,i-left+1);
        }

        return ans;
    }
};