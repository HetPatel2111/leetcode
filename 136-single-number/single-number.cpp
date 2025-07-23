class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(auto it : nums){
            answer ^= it;
        }

        return answer;
    }
};