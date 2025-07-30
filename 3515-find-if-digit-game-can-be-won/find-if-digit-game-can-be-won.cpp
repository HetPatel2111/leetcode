class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;

        for(auto it : nums){
            if(it > 9) sum1 += it;
            else sum2 += it;
        }

        if(sum2 != sum1) return true;
        return false;
    }
};