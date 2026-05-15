class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,-1);
        ans[n-1]=-1;
        int right_max = arr[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            ans[i] = right_max;
            right_max = max(right_max,arr[i]);
        }

        return ans;
    }
};