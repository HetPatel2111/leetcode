class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> u;
        unordered_map<char,char> v;
        int n=s.size();
        
        for(int i=0 ; i<n ; i++){
            if(u.find(s[i])==u.end()){
                u.insert({s[i],t[i]});
            }
            else{
                char ch = u[s[i]];
                if(ch != t[i]) return false;
            }
        }

        for(int i=0 ; i<n ; i++){
            if(v.find(t[i])==v.end()){
                v.insert({t[i],s[i]});
            }
            else{
                char ch = v[t[i]];
                if(ch != s[i]) return false;
            }
        }

        return true;
    }
};