class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int> u;
        multimap<int,char,greater<int>> mm;

        for(auto &it: s) u[it]++;

        for(auto &it: u) mm.insert({it.second,it.first});

        string ans;

        for(auto &it : mm){
            ans += string(it.first,it.second);
        }

        return ans;
    }
};