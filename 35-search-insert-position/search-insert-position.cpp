class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int idx=0;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid] < target){
                idx=mid+1;
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return idx;
    }
};