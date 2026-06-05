class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(i ; i<n ; i++){
            if(nums[i]==0) break;
        }
        int j=i+1;

        for(j ; j<n ; j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};