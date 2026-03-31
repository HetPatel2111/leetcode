class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;
        n--;
        int originalLength = nums1.size()-1;

        while(m>=0 && n>=0){
            if(nums1[m] > nums2[n]){
                nums1[originalLength] = nums1[m];
                m--;
                originalLength--;
            }
            else{
                nums1[originalLength] = nums2[n];
                n--;
                originalLength--;
            }
        }

        while(m>=0){
            nums1[originalLength] = nums1[m];
            m--;
            originalLength--;
        }

        while(n>=0){
            nums1[originalLength] = nums2[n];
            n--;
            originalLength--;
        }
    }
};