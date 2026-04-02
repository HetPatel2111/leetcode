class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};

        int lb = lowerBound(nums,target);
        int ub = upperBound(nums,target);

        if(lb>=nums.size() || nums[lb]!=target) return {-1,-1};
        return {lb,ub-1};

    }

    int upperBound(vector<int>&nums , int target){
        int l=0;
        int h=nums.size()-1;
        int ans = nums.size();
        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(nums[mid] > target){
                ans = mid;
                h = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }

    int lowerBound(vector<int>&nums , int target){
        int l=0;
        int h=nums.size()-1;
        int ans = nums.size();
        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(nums[mid] >= target){
                ans = mid;
                h = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};