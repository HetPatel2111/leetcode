class Solution {
public:
    static bool cmp(pair<string,int>&a , pair<string,int>&b){
        if(a.second != b.second) return a.second>b.second;  // desending freq
        return a.first<b.first; // ascending word if freq is same
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> u;

        for(auto &it: words) u[it]++;

        vector<pair<string,int>> temp(u.begin(),u.end());

        sort(temp.begin(), temp.end(), cmp);
        vector<string> ans;
        for(int i = 0; i < k; ++i)
            ans.push_back(temp[i].first);

        return ans;
    }
};