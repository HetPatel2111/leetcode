class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0){
            return {-1,-1};
        }

        int firstIndex = first(nums, target);
        int lastIndex = last(nums, target);
        
        if(firstIndex == nums.size() || nums[firstIndex] != target)
            return {-1, -1};
        if(lastIndex == 0 || nums[lastIndex - 1] != target)
            return {-1, -1};
        
        return {firstIndex, lastIndex - 1};
    }

    int last(vector<int>&nums , int target){
        int l=0;
        int h=nums.size()-1;
        int ans=nums.size();

        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(nums[mid]>target){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }

    int first(vector<int>&nums , int target){
        int l=0;
        int h=nums.size()-1;
        int ans=nums.size();
        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid]>=target){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};