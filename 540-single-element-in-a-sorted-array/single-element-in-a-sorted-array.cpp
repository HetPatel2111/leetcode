class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;

        while(l<h){
            int mid = l + (h-l)/2;

            if(mid%2) mid--;

            if(nums[mid]==nums[mid+1]) l=l+2;
            else h=mid-1;
        }

        return nums[l];
    }
};