class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int length=nums1.size();
        if(nums2.size()==0) return;
        if(nums1.size()==0){
            nums1=nums2;
            return;
        }
        m--;
        n--;
        while(m>=0 && n>=0){
            if(nums1[m]>nums2[n]){
                nums1[length-1] = nums1[m];
                length--;
                m--;
            }
            else{
                nums1[length-1] = nums2[n];
                length--;
                n--;
            }
        }

        while(m>=0){
            nums1[length-1] = nums1[m];
            length--;
            m--;
        }

        while(n>=0){
             nums1[length-1] = nums2[n];
                length--;
                n--;
        }
    }
};