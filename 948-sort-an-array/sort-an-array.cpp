class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        HeapSort(nums);
        return nums;
    }

    void HeapSort(vector<int>&v){
        int n = v.size();

        for(int i=n/2-1 ; i>=0 ; i--){
            hipify(v, n , i);
        }

        for(int i=n-1 ; i>=0 ; i--){
            swap(v[0],v[i]);
            hipify(v,i,0);
        }
    }

    void hipify(vector<int>&v , int n , int i){
        int maximum = i;

        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && v[maximum] < v[left]) maximum=left;
        if(right<n && v[maximum] < v[right]) maximum=right;

        if(maximum != i){
            swap(v[i],v[maximum]);
            hipify(v,n,maximum);
        }
    }
};