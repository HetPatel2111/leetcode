class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> u;

        for(int i=0 ; i<n ; i++){
            int com = target - nums[i];

            if(u.find(com)!=u.end()){
                return {i,u[com]};
            }
            u[nums[i]]=i;
        }

        return {-1,-1};
    }
};