class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum=0;
        bool allNegative=true;

        for(auto &it : nums){
            if(it>0){
                allNegative=false;
                break;
            }
        }

        if(allNegative){
            int maxEle = nums[0];
            for(auto &it : nums){
                if(it>maxEle) maxEle=it;
            }
            return maxEle;
        }
        
        for(auto &it : nums){
            sum+=it;
            maxSum = max(maxSum,sum);
            if(sum<0)sum=0;
        }

        return maxSum;
    }
};