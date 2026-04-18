class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> u;
        vector<int> ans;
        for(auto &it : nums) u[it]++;

        multimap<int,int,greater<int>> mm;

        for(auto &it : u) mm.insert({it.second,it.first});

        for(auto &it : mm){
            ans.push_back(it.second);
            k--;
            if(k==0) return ans;
        }

        return ans;
    }
};