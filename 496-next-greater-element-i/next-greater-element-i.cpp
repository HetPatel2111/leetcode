class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> u;
        vector<int> ans;
        stack<int> st;

        for(int i=nums2.size()-1 ; i>=0 ; i--){
            if(!st.empty()){
                if(nums2[i] < st.top()){
                    u[nums2[i]] = st.top();
                    st.push(nums2[i]);
                    continue;
                }

                while(!st.empty() && nums2[i]>=st.top()) st.pop();

                if(st.empty()){
                    st.push(nums2[i]);
                    u[nums2[i]]=-1;
                }
                else{
                    u[nums2[i]] = st.top();
                    st.push(nums2[i]);
                }
            }
            else{
                st.push(nums2[i]);
                u[nums2[i]] = -1;
            }
        }

        for(auto &it : nums1){
            ans.push_back(u[it]);
        }

        return ans;

    }
};