class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == k) return nums;
        unordered_map<int,int> u;
        vector<int> ans;
        for(auto &it : nums) u[it]++;

        multimap<int,int,greater<int>> m;

        for(auto &it : u) m.insert({it.second,it.first});

        for(auto &it : m){
            ans.push_back(it.second);
            k--;

            if(k==0) break;
        }

        return ans;
    }
};