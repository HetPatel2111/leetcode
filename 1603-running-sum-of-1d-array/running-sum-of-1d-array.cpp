class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        for(auto &it : nums){
            it += sum;
            sum=it;
        }

        return nums;
    }
};