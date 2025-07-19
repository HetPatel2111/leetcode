class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;

        while(l<h){
            int mid = l + (h-l)/2;

            int next = (mid + 1) % nums.size();
            if(nums[mid]>nums[next]){
                h= mid;
            }
            else{
                l=mid+1;
            }
        }

        return l;
    }
};