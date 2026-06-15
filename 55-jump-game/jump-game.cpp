class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last=nums.size()-1;
        int maxIdx=0;

        for(int i=0 ; i<nums.size() ; i++){
            if(maxIdx < i) return false;
            if(maxIdx >= last) return true;
            maxIdx = max(maxIdx,nums[i]+i);
        }

        return true;
    }
};