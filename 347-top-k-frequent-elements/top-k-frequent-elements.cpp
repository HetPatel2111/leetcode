class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> u;
        multimap<int,int,greater<int>> mm;

        for(auto &it: nums) u[it]++;

        for(auto &it : u) mm.insert({it.second,it.first});

        for(auto &it : mm){
            ans.push_back(it.second);
            k--;

            if(k==0) return ans;
        }

        return ans;
    }
};