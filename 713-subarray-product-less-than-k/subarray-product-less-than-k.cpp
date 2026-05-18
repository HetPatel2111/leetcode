class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        long long mul=1;
        int count=0;
        for(int i=0 ; i<n ; i++){
            mul=1;
            for(int j=i ; j<n ; j++){
                mul*=nums[j];
                if(mul>=k) break;
                count++;
            }
        }

        return count;
    }
};