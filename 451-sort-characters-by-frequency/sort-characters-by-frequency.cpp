class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> um;
        for(auto &it : s){
            um[it]++;
        }

        multimap<int,char,greater<int>> mm;

        for(auto &it: um) mm.insert({it.second,it.first});

        string ans;
        for(auto &it: mm) ans+=string(it.first,it.second);

        return ans;
    }
};