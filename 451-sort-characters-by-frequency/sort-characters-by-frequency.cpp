class Solution {
public:
    static bool cmp(pair<char,int>&a , pair<char,int>&b){
        return a.second > b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int> u;

        for(auto it : s) u[it]++;

        vector<pair<char,int>> v(u.begin(),u.end());

        sort(v.begin(),v.end(),cmp);

        string result;

        for(auto it : v){
            result += string(it.second,it.first);
        }

        return result;
    }
};