class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;

        for(j ; j<n ; j++){
            if(nums[i]!=nums[j]){
                i++;
                swap(nums[i],nums[j]);
            }
        }

        return i+1;
    }
};