class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int l=0;
        int h=nums.size()-1;
        int min = INT_MAX;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid]<min) min=nums[mid];

            if(nums[l]<=nums[mid]){
                if(nums[l]<min) min=nums[l];
                l=mid+1;
            } 
            else{
                h=mid-1;
            }
        }
        return min;
    }
};