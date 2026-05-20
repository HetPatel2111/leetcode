class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        unordered_set<char> st;
        char ch;
        for(auto &it: s){
            if(st.find(it)!=st.end()){
                ch=it;
                break;
            };
            st.insert(it);
        }

        return ch;
    }
};