class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if (nums.size() < 3) return 0; 

        sort(nums.begin(), nums.end());

        int n = nums.size();
        /*Top element mul*/
        int max1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        /*Two negative left side and One higest*/
        int max2 = nums[0] * nums[1] * nums[n - 1];

        return max(max1, max2);
    }
};
