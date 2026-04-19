class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> u;

        for(auto &it : nums){
            u[it]++;

            if(u[it] > n/3 && (ans.size()==0 || ans[0]!=it)) ans.push_back(it);
            if(ans.size()==2) break;
        }

        return ans;
    }
};