class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int u = ub(nums,target);
        int l = lb(nums,target);

        if(l>=nums.size() || nums[l]!=target) return {-1,-1};
        return {l,u-1};
    }

    int ub(vector<int>&nums , int target){
        int ans=nums.size();
        int l=0;
        int h=nums.size()-1;

        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]>target){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        return ans;
    }

    int lb(vector<int>&nums , int target){
        int ans=nums.size();
        int l=0;
        int h=nums.size()-1;

        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]>=target){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        return ans;
    }
};