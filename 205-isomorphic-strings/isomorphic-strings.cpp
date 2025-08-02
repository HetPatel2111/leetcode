class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char> m;
        unordered_map<char,bool> used;
        char c1,c2;
        for(int i=0 ; i<s.size() ; i++){
            c1 = s[i];
            c2= t[i];

            if(m.find(c1) != m.end()){
                if(m[c1] != c2) return false;
            }
            else{
                if(used[c2]) return false;
                used[c2] = true;
            }

            m.insert({c1,c2});
        }

        return true;
    }
};