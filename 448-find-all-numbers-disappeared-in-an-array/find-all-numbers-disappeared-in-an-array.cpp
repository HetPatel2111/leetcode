class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans(nums.size(),0);

        for(int i=0 ; i<nums.size() ; i++){
            ans[nums[i]-1]=-1;
        }

        for(int i=0 ; i<nums.size() ; i++){
            if(ans[i]==0) ans[i]=i+1;
        }

        ans.erase(remove(ans.begin(), ans.end(), -1), ans.end());

        return ans;
    }
};