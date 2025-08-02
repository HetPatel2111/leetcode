class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int> u;

        for(int i=0 ; i<s.size() ; i++){
            u[s[i]]++;
        }

        for(int i=0 ; i<s.size() ; i++){
            if(u[t[i]] > 0) u[t[i]]--;
            else return false;
        }

        return true;

    }
};