class Solution {
public:
    static bool cmp(pair<char,int>&a , pair<char,int>&b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> u;

        for(auto &it : s) u[it]++;
        string result;
        vector<pair<char,int>> v;

        for(auto &it : u) v.push_back({it.first,it.second});

        sort(v.begin(),v.end(),cmp);

        for(auto it : v){
            result += string(it.second,it.first);
        }

        return result;

    }
};