class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=0 ; i<2*n ; i++){
            int ele = nums[i%n];

            while(!s.empty() && ele>nums[s.top()]){
                int idx = s.top();
                s.pop();
                ans[idx]=ele;
            }

            if(i<n) s.push(i);
        }

        return ans;
    }
};