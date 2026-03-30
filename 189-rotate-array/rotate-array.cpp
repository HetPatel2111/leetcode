class Solution {
public:

    void reverseArr(vector<int>&nums,int st , int end){
        end--; 
        while (st < end) {
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        reverseArr(nums,0,n);
        reverseArr(nums,0,k);
        reverseArr(nums,k,n);
    }
};