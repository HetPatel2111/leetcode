class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        bool allNegative = true;

        for(auto &it : nums){
            if(it>0){
                allNegative=false;
                break;
            }
        }

        if(allNegative){
            int max_ele = nums[0];

            for(auto &it : nums){
                if(it>max_ele) max_ele=it;
            }
            return max_ele;
        }

        int sum=0;
        int maxSum=INT_MIN;

        for(auto &it : nums){
            sum += it;
            if(sum > maxSum) maxSum=sum;
            if(sum<0) sum=0;
        }

        int total=0;
        for(auto &it : nums) total+=it;

        int minSum = INT_MAX;
        sum=0;

        for(auto &it : nums){
            sum += it;
            if(sum < minSum) minSum = sum;
            if(sum>0) sum=0;
        }

        return max(maxSum , total-minSum);
        
    }
};