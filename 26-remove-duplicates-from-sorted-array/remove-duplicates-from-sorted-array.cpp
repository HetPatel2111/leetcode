class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> u;

        for(int i=0 ; i<nums.size() ; i++){
            u.insert(nums[i]);
        }

        int ans = u.size();
        int idx=0;
        for(auto it : u){
            nums[idx] = it;
            idx++;
        }

        return ans;
    }
};