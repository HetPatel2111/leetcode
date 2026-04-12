class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum=INT_MIN;
        int sum=0;
        
        int minSum=INT_MAX;
        int sum1=0;

        for(auto &it : nums){
            sum+=it;
            sum1+=it;

            maxSum = max(maxSum,sum);
            minSum = min(minSum,sum1);

            if(sum<0)sum=0;
            if(sum1>0)sum1=0;
        }

        return max(maxSum,abs(minSum));
    }
};