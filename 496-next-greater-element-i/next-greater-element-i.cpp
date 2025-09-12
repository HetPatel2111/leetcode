class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> v(m,-1);
        stack<int> s;
        for(int i=0 ; i<m ; i++){
            while(!s.empty() && nums2[s.top()]<=nums2[i]){
                int idx = s.top();
                s.pop();
                v[idx]=nums2[i];
            }
            s.push(i);
        }

        vector<int> ans(n,-1);
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(nums1[i] == nums2[j]){
                    ans[i]=v[j];
                    break;
                }
            }
        }

        return ans;
    }
};