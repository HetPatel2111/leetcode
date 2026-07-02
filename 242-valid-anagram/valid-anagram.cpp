class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,int> u;
        for(auto &it : s) u[it]++;

        for(auto &it : t){
            if(u.find(it)==u.end()) return false;
            if(u[it]==0) return false;
            u[it]--;
        }

        return true;
    }
};