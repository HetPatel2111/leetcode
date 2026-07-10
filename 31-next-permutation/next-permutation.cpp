class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;

        for(i ; i>=0 ; i--){
            if(nums[i] < nums[i+1]) break;
        }

        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;        
        }

        int j=n-1;

        while(j>i && nums[i] >= nums[j]) j--;

        swap(nums[i],nums[j]);

        reverse(nums.begin()+i+1,nums.end());

    }
};