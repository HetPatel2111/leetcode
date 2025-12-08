class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(nums,0,ans,current);
        return ans;
    }

    void backtrack(vector<int>&nums,int idx , vector<vector<int>>&ans , vector<int>&current){
        ans.push_back(current);

        for(int i=idx ; i<nums.size() ; i++){
            current.push_back(nums[i]);
            backtrack(nums,i+1,ans,current);
            current.pop_back();
        }
    }
};