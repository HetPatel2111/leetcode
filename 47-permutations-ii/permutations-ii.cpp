class Solution {
public:
    void combination(vector<int>&nums ,vector<int> &currentPermutation ,   vector<bool> &used ,  vector<vector<int>> &ans){

    if(currentPermutation.size() == nums.size()){
        ans.push_back(currentPermutation);
        return;
    }

    for(int i=0 ; i<nums.size() ; i++){
        if(used[i]) continue;

        if(i>0 && nums[i]==nums[i-1] && !used[i-1]){
            continue;
        }

        used[i]=true;
        currentPermutation.push_back(nums[i]);
        combination(nums,currentPermutation,used,ans);

        used[i]=false;
        currentPermutation.pop_back();
    }
    
}

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> currentPermutation;
        vector<bool> used(nums.size(), false);
        vector<vector<int>> ans;

        combination(nums,currentPermutation,used,ans);
        return ans;
    }
};