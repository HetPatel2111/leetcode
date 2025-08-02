class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        int m = strs.size();
        bool flag = false;
        string ans;
        for(int i=0 ; i<n ; i++){
            char ch = strs[0][i];
            for(int j=1 ; j<m ; j++){
                if(strs[j][i] == strs[j].size() || strs[j][i] != ch){
                    flag = true;
                    break;
                }
            }

            if(!flag) ans+=ch;
            else break;
        }
        return ans;
    }
};