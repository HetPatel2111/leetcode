class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int idx=0;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid] < target){
                idx = mid+1;
                low = mid+1;
            }else{
                high=mid-1;
            }   
        }
        return idx;
    }
};