class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());

        int maxDiff = 0;

        for(int i=1 ; i<n ; i++){
            if(nums[i]-nums[i-1] > maxDiff) maxDiff=nums[i]-nums[i-1];
        }

        return maxDiff;
    }
};