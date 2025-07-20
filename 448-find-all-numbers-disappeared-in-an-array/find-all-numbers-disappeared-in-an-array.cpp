/*In this we search on the original array . in original array we get that value in those idx of the array we change sign . if sign is not there mean that is not in array*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++){
           if(nums[abs(nums[i]) - 1] > 0){
                nums[abs(nums[i])-1] = (-1)*nums[abs(nums[i])-1];
            }
        }

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }

        //ans.erase(remove(ans.begin(), ans.end(), -1), ans.end());

        return ans;
    }
};