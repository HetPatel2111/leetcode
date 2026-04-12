class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m=strs.size();
        int n=strs[0].size();
        string ans;
        bool common = true;

        for(int i=0 ; i<n ; i++){
            char ch=strs[0][i];
            for(int j=1 ; j<m ; j++){
                if(strs[j][i] == strs[j].size() || strs[j][i] != ch){
                    common=false;
                    break;
                }
            }

            if(common){
                ans+=ch;
            }
            else break;
        }

        return ans;
    }
};