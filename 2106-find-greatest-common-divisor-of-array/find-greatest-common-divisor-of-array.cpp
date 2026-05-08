class Solution {
public:
    int GCD(int a , int b){
        if(b==0) return a;
        return GCD(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int small=nums[0];
        int high=nums[0];

        for(auto &it : nums){
            if(it > high) high=it;
            if(it < small) small=it;
        }

        return GCD(high,small);
    }
};