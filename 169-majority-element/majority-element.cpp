class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele;

        for(auto &it : nums){
            if(count==0){
                count++;
                ele=it;
            }
            else if(it == ele){
                count++;
            }
            else{
                count--;
            }
        }

        return ele;
    }
};