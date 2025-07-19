/*In this problem we have odd even problem . single element than follow the the first occurence is is even pos and second occurence in odd position . exact opposite for the after single element*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int l=0;
       int h=nums.size()-1;

       while(l<h){
            int mid= l + (h-l)/2;
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                l = mid + 2;
            } else {
                h = mid;
            }
       }
       return nums[h];
    }
};