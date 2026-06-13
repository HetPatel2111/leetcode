class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        unordered_map<char,int> u;

        u.insert({'I',1});
        u.insert({'V',5});
        u.insert({'X',10});
        u.insert({'L',50});
        u.insert({'C',100});
        u.insert({'D',500});
        u.insert({'M',1000});

        int ans=0;

        for(int i=0 ; i<n ; i++){
            if(i+1<n && u[s[i]] < u[s[i+1]]) ans-=u[s[i]];
            else ans+=u[s[i]];
        }

        return ans;

    }
};