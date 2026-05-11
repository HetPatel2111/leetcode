class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(auto &it : nums){
            int temp = it;
            vector<int> v;

            while(temp>0){
                v.push_back(temp%10);
                temp/=10;
            }

            for(int j=v.size()-1 ; j>=0 ; j--){
                ans.push_back(v[j]);
            }
        }

        return ans;
    }
};