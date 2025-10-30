class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans;
        if(n<2) ans;
        int low=0;
        int high=n-1;

        while(low<high){
            if(numbers[low]+numbers[high]==target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }

            if(numbers[low]+numbers[high] > target) high--;
            else low++;
        }

        return ans;
    }
};