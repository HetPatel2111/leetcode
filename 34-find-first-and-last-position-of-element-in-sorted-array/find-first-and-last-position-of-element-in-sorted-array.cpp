class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lo(nums,target);
        int h = up(nums,target);

        if(l==nums.size() || nums[l]!=target){
            return {-1,-1};
        }

        return {l,h-1};
    }

    int lo(vector<int>& nums, int target){
        int n=nums.size();
        int ans=n;
        int l=0;
        int h=n-1;

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

    int up(vector<int>& nums, int target){
        int n=nums.size();
        int ans=n;
        int l=0;
        int h=n-1;

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
};