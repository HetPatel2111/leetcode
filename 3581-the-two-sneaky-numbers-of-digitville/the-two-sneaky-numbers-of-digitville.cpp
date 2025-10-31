class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> u;

        for(auto &it : nums){
            u[it]++;
        }

        vector<int> ans;
        for(auto &it : u){
            if(it.second==2) ans.push_back(it.first);
        }

        return ans;
    }
};