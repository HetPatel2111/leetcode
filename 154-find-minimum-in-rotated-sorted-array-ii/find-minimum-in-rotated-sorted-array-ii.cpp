class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int min1=INT_MAX;

        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid] <= min1) min1 = nums[mid];

            /*This is for the handle duplicate element*/
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                h--;
                l++;
                continue;
            }

            if(nums[l]<=nums[mid]){
                if(nums[l]<min1) min1=nums[l];
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return min1;
    }
};