class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele=nums[0];

        for(auto &it: nums){
            if(count==0){
                count++;
                ele=it;
            }
            else if(ele == it) count++;
            else count--;
        }

        return ele;
    }
};