class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int j=n-1;
        int k=0;

        for(int i=n-1 ; i>=0 ; i--){
            if(abs(nums[k]) > abs(nums[j])){
                ans[i] = nums[k] * nums[k];
                k++;
            }
            else{
                ans[i] = nums[j]*nums[j];
                j--;
            }
        }

        return ans;
        
    }
};