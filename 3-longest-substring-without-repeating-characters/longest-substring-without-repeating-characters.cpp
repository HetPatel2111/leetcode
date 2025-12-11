class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        vector<char> v;

        for(int i=0 ; i<s.size() ; i++){
            auto it = find(v.begin(),v.end(),s[i]);

            if(it!=v.end()){ // duplicate Found
                v.erase(v.begin(),it+1);
            }

            v.push_back(s[i]);
            int length = v.size();
            maxi = max(length,maxi);
        }

        return maxi;
    }
};