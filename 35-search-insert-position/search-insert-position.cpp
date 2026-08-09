class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(target < nums[0]) return 0;
        if(nums[n-1] < target) return n;
        int l=0;
        int h=n-1;
        int ans=n;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid]==target) return mid;
            if(nums[mid] >= target){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        return ans;
    }
};