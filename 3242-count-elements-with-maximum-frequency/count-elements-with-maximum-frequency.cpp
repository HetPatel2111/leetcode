class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> u;
        int maxFreq=0;
        for(auto &it : nums){
            u[it]++;
            if(u[it] > maxFreq){
                maxFreq=u[it];
            }
        }

        int ans=0;

        for(auto it : u){
            if(it.second == maxFreq){
                ans += it.second;
            }
        }

        return ans;

    }
};