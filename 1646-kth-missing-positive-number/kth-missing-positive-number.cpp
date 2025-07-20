class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr.size() == arr[arr.size()-1]) return arr.size()+k;
        if(k<arr[0]) return k;
        int l=0;
        int h=arr.size()-1;
        int count;
        int prev;
        while(l<=h){
            int mid= l+(h-l)/2;
            //count=0;
            //prev=0;
            count = arr[mid]-(mid+1);

            if(count<k){
                l=mid+1;
                //prev=count;
            }
            else{
                h=mid-1;
            }
        }
        return l+k;
    }
};