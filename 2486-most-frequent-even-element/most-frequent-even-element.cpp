class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> u;

        for(auto &it : nums){
            if(it%2) continue;
            u[it]++;
        }

        if(u.size()==0) return -1;
        
        int maxFreq=0;
        int ans=-1;
        for(auto &it : u){
            if(it.second > maxFreq || maxFreq==it.second&&it.first<ans){
                ans=it.first;
                maxFreq=it.second;
            }
        }


        return ans;
    }
};