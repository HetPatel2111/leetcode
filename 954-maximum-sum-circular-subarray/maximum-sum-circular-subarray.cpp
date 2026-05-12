class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        bool allNegative=true;

        for(auto &it : nums){
            if(it>0){
                allNegative=false;
                break;
            }
        }

        if(allNegative){
            int maxEle=nums[0];
            for(auto &it: nums){
                if(it>maxEle) maxEle=it;
            }
            return maxEle;
        }

        int maxi=INT_MIN;
        int sum=0;

        for(auto &it : nums){
            sum+=it;
            maxi = max(maxi,sum);
            if(sum<0) sum=0;
        }

        int total=0;
        for(auto &it: nums) total+=it;

        int mini=INT_MAX;
        sum=0;

        for(auto &it : nums){
            sum+=it;
            mini = min(mini,sum);
            if(sum>0) sum=0;
        }

        return max(maxi,total-mini);
    }
};