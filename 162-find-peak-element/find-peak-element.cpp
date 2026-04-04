class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;

        while(l<h){
            int mid = l +(h-l)/2;
            int next = (mid+1)%n;

            if(nums[mid] > nums[next]){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }

        return l;
    }
};