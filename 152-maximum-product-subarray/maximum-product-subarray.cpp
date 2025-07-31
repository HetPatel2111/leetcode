class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suff=1;
        int pre=1;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0 ; i<n ; i++){
            if(suff==0) suff=1;
            if(pre==0) pre=1;

            suff *= nums[n-i-1];
            pre *= nums[i];

            ans = max(ans , max(pre,suff));
        }

        return ans;
    }
};