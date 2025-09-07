class Solution {
public:
    int lower_bound(vector<int> &v , int x){
        int l=0;
        int h=v.size()-1;
        int ans=v.size();

        while(l<=h){
            int mid = l + (h-l)/2;
            if(v[mid]>=x){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return ans;
       
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;

        for(auto &x : nums){
            int it = lower_bound(ans,x);

            if(it==ans.size()){
                ans.push_back(x);
            }
            else{
                ans[it]=x;
            }
        }

        return ans.size();
    }
};