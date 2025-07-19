class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=nums[0];
        for(auto it : nums){
            if(it>max) max=it;
        }

        int l=1;
        int h=max;
        int ans=1;
        int sum=0;
        while(l<=h){
            int mid = l + (h-l)/2;
            sum=0;
            for(auto it:nums){
                sum += ceil((float)it/mid);
            }

            if(sum<=threshold){
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