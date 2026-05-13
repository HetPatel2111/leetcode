class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int n=arr.size();
        int h=n-1;

        while(l<=h){
            int mid = l + (h-l)/2;

            int count = arr[mid] - (mid+1);

            if(count<k) l=mid+1;
            else h=mid-1;
        }

        return l+k;
    }
};